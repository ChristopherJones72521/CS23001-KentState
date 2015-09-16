//
// CS23001 - Lab
// This is a program that outputs my name
// Copywrite Christopher Jones 2015 (c)
//

#include <iostream>

using namespace std;

int main ()
{

	string stringFun = "Christopher Jones";
	int i, j;
	for (i = 0; i < stringFun.length(); i++) {
		do {
			for (j = 0; j < i; j++)
				cout << ' ';
		} while (j != i);
		cout << stringFun[i] << endl;
	}

	return 0;
}
