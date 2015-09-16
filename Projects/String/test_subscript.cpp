#include "string.hpp"
#include <cassert>

//===========================================================================
int main ()
{
	{
		// Setup
		String str;

		// Verify
		assert(str[0] == '\0');
	}

	{
		// Setup
		String str('a');

		// Verify
		assert(str[0] == 'a');
	}

	{
		// Setup
		String str("a");

		// Verify
		//assert(str[0] == 'a');
        std::cerr << str[0];
	}

	{
		// Setup
		String str("It's over 9000!");

		// Verify
        //assert(str[0] == ' ');
		//assert(str[1] == '!');
        /*std::cerr << str[0];
        std::cout << std::endl;
        std::cerr << str[1];
        */
	}
}
