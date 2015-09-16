//
// fibonacci sequence function 
// Created by Christopher Jones
//
//

#include <iostream>

int fib(int n);

int main()
{
	
	int n = 0;
	int p = 0;

	std::cout<<"Please enter a number to be computed."<<std::endl;
	
	std::cin >> n;
		
	std::cout << "The Fibonacci result of " << n << " is: ";
	
	for(int i = 0; i != n ; i++)
	{
		p = fib(i);
		std::cout << p << ", "; 
	}
	std::cout<<std::endl;
	
return 0;  

}
 


	int fib(int n)
	{
		if ( n == 0 )
		{
		return 0;
		}
		if ( n == 1 )
		{
		return 1;
		}
		return fib(n - 1) + fib(n - 2);

	}

/*
{if n == 0	0}
{if n == 1 	1}
{else n-1 + n-2}
*/	
