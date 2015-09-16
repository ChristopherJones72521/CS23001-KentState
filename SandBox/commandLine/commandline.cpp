//
// Command line exercise
//


#include <iostream>

int main (int argc, char** argv)
{
//	std::cerr<<"Num args: "<<argc<<std::endl;
	std::cerr<<"The file "<<argv[0]<<" contains these arguments: ";
	for (int i=1; i<argc; ++i){
	std::cerr<<argv[i]<<' ';
	}
	std::cout<<std::endl;
return 0;
}
