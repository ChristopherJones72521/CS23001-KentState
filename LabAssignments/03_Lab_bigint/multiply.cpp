//
// multiply file
// Christopher Jones
// CS23001
// 

#include "bigint.hpp"

int main(){

  std::ifstream inFile("data1-2.txt");

  bigint left, right;

  while (inFile >> left && inFile >> right){
    std::cout << "left:  " << left << std::endl;
    std::cout << "right:  " << right << std::endl;

    bigint result= left * right;

    std::cout << "result:  " << result << std::endl;

}
 
inFile.close();
return 0;

}
