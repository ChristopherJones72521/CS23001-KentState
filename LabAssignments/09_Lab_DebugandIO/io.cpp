//
// FileIO Exercise 
// Created by Christopher Jones 
// 03/10/15
//

#include <iostream>
#include <fstream>
#include <string>

void getWord(std::ifstream &fin, char *arr);

void getline (std::ifstream &fin, char[]);

int main(int argc, char **argv)
{
	// opening files
	std::ifstream fin; 
	std::ofstream fout;
	fin.open("debugandiotestfile.txt");
	fout.open(argv[1]);	
	
	// check the filename being passed into the program
	std::cerr << "The file name is: " << argv[1] << std::endl;
	
	// declaring character array arr
	char arr[256];
	for(int i=0; i<255; ++i) // initializing all elements in array arr
	{
		arr[i] = '\0';
	}

	// declaring a string for getline to ensure it is working
//	char string[256] {"Default Value "};

	// Call function getWord
	getWord(fin, arr);
	int num_elements = sizeof(arr) / sizeof(arr[1]);
//	fout << num_elements; // Displays the size of array arr
	fout << "Here are all of the values passed into arr:" << std::endl;
	for(int i=0;i<num_elements;++i)	
	{
		if(arr[i] != '\0')
		fout << arr[i];
	}
	fout<<std::endl;
	fout<<"The number of words found are: 1"; // I'm using the function call itself as a counter. 
	fout<<std::endl; fout<<std::endl; // adding space to the bottom of the file
	// output to console
	std::cerr<<"Function call for getWord successfully wrote the word " << arr[2] << " to "<<argv[1]<<std::endl;
	std::cout<<std::endl;

	// Call function getline
	getline(fin, arr);
	fout<<"Here is everything that has been passed using getline to string: "<<std::endl;
	fout << arr;
	fout<<std::endl;
	std::cerr<<"Function call for getline successfully wrote to "<<argv[1]<<std::endl; // 
	std::cout<<std::endl; std::cout<<std::endl; // adding space to the bottom of the file
	


return 0;
}

void getWord(std::ifstream &fin, char *arr)
{
	if (!fin.is_open())
	{
		std::cout << "Error: input file is not open" << std::endl;
	} else {
		int i = 2; 
		fin.get(arr[i]);
		while(arr[i] != ' ' && !fin.eof())
		{	
//			std::cerr << arr[i];
			++i;
			fin.get(arr[i]);
		}
		arr[i]='\0';
	}
}

void getline (std::ifstream &fin, char arr[])
{
	if (!fin.is_open())
	{
		std::cout<<"Error: file is not open" << std::endl;
	} else {
		int i = 2;
		char c;
		fin.get(arr[c]);
		while (arr[c] != '\n' && !fin.eof())
		{
			++
			
//		fin.getline(arr,256); // alternative implementation
	}
}

