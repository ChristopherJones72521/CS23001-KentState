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

#ifndef NODE_HPP_
#define NODE_HPP_

#include <iostream>
#include <cassert>

template <typename T>
class Node {
public:
	// Default constructor for node
	Node(): data(), next(0) {};

	// Node constructor for element with data
	Node(const T& item): data(item), next(0) {};

	// Data container for node
	T data;

	// Node's pointer to the next element
	Node<T> *next;
};

#endif
