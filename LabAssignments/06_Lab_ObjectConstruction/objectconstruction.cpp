//
// Implementation File for objectConstructor
// Christopher Jones
// CS23001
//

#include "objectConstructor.hpp";

int main(){
	objectConstructor (); // call to default constructor
	objectConstructor o; // local object created
	objectConstructor (4); // assignment constructor called
	o.~objectConstructor (); // call to destructor

return 0;
}
