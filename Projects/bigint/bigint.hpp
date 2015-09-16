//
// A header File Created by Christopher Jones 
// CS23001
//

#ifndef BIGINT_HPP_
#define BIGINT_HPP_

#include <iostream>
#include <cassert>
#include <fstream>
#include <cstdlib>

const int maxSize = 100;

class bigint {
	public:
		bigint();
		bigint(int);
		bigint(const char[]);
		bool operator==(const bigint&);
		// bool operator==(int);
		// bool operator==(const char[]);
		void output(std::ostream&);
		void zero();
		bigint operator + (bigint)const;
		int operator [](int)const;
		bigint timesDigit(int);
		bigint times10(int);
		bigint operator*(bigint);


	friend std::ostream& operator<<(std::ostream&, bigint);
	friend std::istream& operator>>(std::istream&, bigint&);

	private:
		int bigArr[maxSize];
};

#endif
