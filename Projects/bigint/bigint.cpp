//
//  bigint.cpp
//
//  Created by Christopher Jones for CS23001
//  Copyright (c) 2015 Christopher Jones. All rights reserved.
//

#include "bigint.hpp" 

void bigint::zero() { // Initializes a bigint to zero.
    for (int i = 0; i < maxSize; ++i)
        bigArr[i] = 0;
}

bigint::bigint(){ // Default constructor
    zero(); 
}

bigint::bigint(int x){ // Initialize with an int value provided
    zero();
    for (int i = 0; i<maxSize; i++){
        bigArr[i] = x % 10;
        x /= 10;
    }
}

bigint::bigint(const char x[]){ // Initialize a bigint to a char[] provided
    zero();
    int len = 0;
    int k = 0;
    do {
        ++len;
    } while (x[len] != '\0');
    for (int j = len - 1; j >= 0; j--, k++){
        bigArr[k] = int(x[j]) - int('0');
    }
}

bool bigint::operator==(const bigint& rhs){ // A method to compare if two bigints are equal
    for (int i = 0; i<maxSize; i++){
        if (bigArr[i] != rhs.bigArr[i])
        {
            return false;
        }
    }
    return true;
}

void bigint::output(std::ostream& out){ // takes a stream as input and writes a bigint to that stream.
    int newSize = maxSize, newOut = 0;
    
    do{
        --newSize;
    } while (newSize>0 && bigArr[newSize] == 0);
    
    do{
        if (newSize % 80)
            out << bigArr[newSize];
        else
            out << bigArr[newSize] << std::endl;
        --newSize, ++newOut;
    } while (newSize >= 0);
    
}

bigint bigint::operator+(bigint rhs)const { // Overload the addition operator
    int rem = 0, temp = 0;
    
    for (int i = 0; i<maxSize; ++i){
        rem = bigArr[i] + rhs.bigArr[i] + rem;
        temp = rem % 10;
        rem /= 10;
        rhs.bigArr[i] = temp;
    }
    return rhs;
}

int bigint::operator[](int i)const{ // Overload the subscript operator[]
    if ((i<0) || (i >= maxSize)) return 0;
    return bigArr[i];
}

std::ostream& operator<<(std::ostream& out, bigint rhs){ // Overload the extraction operator
    rhs.output(out);
    return out;
}

std::istream& operator>>(std::istream& in, bigint& rhs){ // Overload the insertion operator
    char ch, temp[maxSize];
    for (int j = 0; j<maxSize; j++){
        temp[j] = 0;
    }
    in >> ch;
    for (int i = 0; i<maxSize && ch != ';'; ++i){
        temp[i] = ch;
        in >> ch;
    }
    
    rhs = bigint(temp);
    return in;
}

bigint bigint::timesDigit(int x){ // Multiply a bigint and a single digit integer between 0 and 9
    bigint temp;
    int rem = 0, result = 0;
    for (int i = 0; i<maxSize; i++){
        rem = bigArr[i] * x + rem;
        result = rem % 10;
        rem /= 10;
        temp.bigArr[i] = result;
    }
    return temp;
}

bigint bigint::times10(int x){ // A method to multiply a bigint by 10^n with n>0
    bigint temp;
    for (int i = maxSize - 1 - x; i >= 0; i--){
        temp.bigArr[i + x] = bigArr[i];
    }
    for (int j = 0; j<x; j++){
        temp.bigArr[j] = 0;
    }
    return temp;
}

bigint bigint::operator*(bigint rhs){ // Overload * to multiply two bigints
    bigint product = 0;
    for (int i = 0; i<maxSize; i++){
        product = product + (timesDigit(rhs.bigArr[i])).times10(i);
    }
    return product;
