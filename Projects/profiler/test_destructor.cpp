/*
 * =====================================================================================
 *
 *       Filename:  test_destructor.cpp
 *
 *    Description:  Test ASTree's destructor
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

#include "ASTree.hpp"
#include <cassert>

int main()
{
	{
//        ASTree blank_tree;
        ASTree blank_tree();
	}

	std::cout << "Completed testing ASTree's destructor!" << std::endl;

	return 0;
}
