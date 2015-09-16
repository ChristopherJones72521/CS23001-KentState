#include "btree.hpp"
#include <iostream>

int main()
{
	BTree<int> tree;
	tree.Insert(6);
	tree.Insert(7);
	tree.Insert(5);

	tree.PrintNode(tree.root);
	
	std::cerr<<std::endl;
	BTree<int> tree2 = tree;
	tree2.PrintNode(tree2.root); // test copy

return 0;
}	
