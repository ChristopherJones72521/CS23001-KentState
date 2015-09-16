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

int main()
{
	{
		Queue<int> blank_queue;
		assert(blank_queue == Queue<int>());
		assert(blank_queue.getLength() == 0);
	}

	std::cout << "Completed testing queue!" << std::endl;

	return 0;
}
