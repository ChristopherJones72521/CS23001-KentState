/*
 * =====================================================================================
 *
 *       Filename:  test_stack_int.cpp
 *
 *    Description:  Tests stacks with ints
 *
 *        Version:  1.0
 *        Created:  Today
 *       Revision:  none
 *       Compiler:  clang++
 *
 *         Author:  Christopher Jones
 *
 * =====================================================================================
 */

#include "queue.hpp"
#include <string>

int main()
{
	{
        Queue<std::string> blank_queue;
        assert(blank_queue == Queue<std::string>());
		assert(blank_queue.getLength() == 0);
	}

	{
        Queue<std::string> test, result, blank;
        std::string item = "Chris";

		test.enqueue(item);
		result = test;

		assert(test == result);
		assert(test != blank);

		assert(test.getLength() == 1);
		assert(result.getLength() == 1);
	}

	{
        Queue<std::string> test, result, blank;
        std::string item[3];

		item[0] = "Chris";
		item[1] = "is";
		item[2] = "awesome!";

		test.enqueue(item[0]);
		test.enqueue(item[1]);
		test.enqueue(item[2]);

		result = test;

		assert(test == result);
		assert(test != blank);

		assert(test.getLength() == 3);
		assert(result.getLength() == 3);
	}

	std::cout << "Completed testing queue with the string datatype!" << std::endl;

	return 0;
}
