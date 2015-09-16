//
// A header file for ObjectConstruction lab
// Christopher Jones
// CS23001
//

#ifndef OBJECTCONSTRUCTION_H_
#define OBJECTCONSTRUCTION_H_

#include <iostream>

class objectConstructor{
	public:
		objectConstructor (){
			std::cout << "Called default constructor" << std::endl;}
		objectConstructor::operator (objectConstructor&){
			std::cout << "Called assignment constructor" << std::endl;}
		objectConstructor (const objectconstructor&){
			std:cout << "Called copy constructor" << std::endl;}
		~objectConstructor (){
			std::cout << "Called destructor" << std::endl;}
};

#endif
