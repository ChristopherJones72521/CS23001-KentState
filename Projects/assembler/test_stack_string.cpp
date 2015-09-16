/*
 * =====================================================================================
 *
 *       Filename:  test_stack_string.cpp
 *
 *    Description:  Tests stack with the string datatype
 *
 *        Version:  1.0
 *        Created:  today
 *       Revision:  none
 *       Compiler:  clang++
 *
 *         Author:  Christopher Jones
 *
 * =====================================================================================
 */

#include "stack.hpp"
#include <string>

int main()
{
	{
        Stack<std::string> blank_stack;
        assert(blank_stack == Stack<std::string>());
		assert(blank_stack.getLength() == 0);
	}

	{
        Stack<std::string> test, result, blank;
        std::string item = "Chris";

		test.push(item);
		result = test;

		assert(test == result);
		assert(test != blank);

		assert(test.getLength() == 1);
		assert(result.getLength() == 1);
	}

	{
        Stack<std::string> test, result, blank;
        std::string item[3];

		item[0] = "Chris";
		item[1] = "is";
		item[2] = "awesome!";

		for (int i = 0; i < 3; ++i) {
			test.push(item[i]);
		}

		result = test;

		assert(test == result);
		assert(test != blank);

		assert(test.getLength() == 3);
		assert(result.getLength() == 3);
	}

	std::cout << "Completed testing stack with string!" << std::endl;

	return 0;
}
