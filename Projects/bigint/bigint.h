//
// Header file for bigint
// Copywrite Christopher Jones 2015 (c)
// CS 23001
// 

#ifndef BIGINT_H
#define BIGINT_H

const int LIMIT = 200;

class bigint {
	public:
		bigint(); // default constructor: Sets the value of the digits array to 0
		bigint(int initial_num); // sets the array to an int value
		bigint(char initial_digits[]); // sets the digits array to type char
		
	private:
		int num;
};
