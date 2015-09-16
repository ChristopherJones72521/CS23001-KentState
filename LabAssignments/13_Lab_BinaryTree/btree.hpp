//
// Binary search tree
// Written by Christopher Jones
//

#include <iostream>

template <typename T>
class Node
{
public:
	Node() 
	{
		left = 0;
		right = 0;
	}
	Node(T val)
	{
		left = 0;
		right = 0;
		data = val;
		
	}
	Node<T>* left;
	Node<T>* right;
	T data;
};

template <typename T>
class BTree
{
public:
	BTree()		{root = 0;}
	BTree(T val)	{root = new Node<T>(val);}
	BTree(const BTree<T>& tree)
	{ 
		root = new Node<T>(tree.root->data);
		CopyNode(root->left, tree.root->left);
		CopyNode(root->right, tree.root->right); 
	}
	~BTree(){}

//	void CopyNode(const BTree<T>& tree, Node<T>* node)
	void CopyNode(Node<T>*& node, Node<T>*& source) 
	{
//		this->root = new Node<T>(node->data);
		if(source == 0)
		{
			return;
		}else{
		node = new Node<T>(source->data);
		CopyNode(node->left, source->left);
		CopyNode(node->right, source->right);
//		{ node = new Node<T>(tree.) }
		}
	}

	void PrintNode(Node<T>* source)
	{
		if (source == 0)
		{
			return;
		}
		PrintNode(source->left);
		std::cerr<<source->data;
		PrintNode(source->right);
	}

	void Insert(T val)
	{
		InsertNode(val, root);
	}

	void InsertNode(T val, Node<T>*& node)
	{
//		std::cerr << "Node is: " << node; 
		if(node == 0)
		{
			node = new Node<T>(val);
//			std::cerr<< "Node is: " << node;
		}else{
			if(node->data >= val)
			{
				InsertNode(val, node->left);
			}else{
				InsertNode(val, node->right);
			}
		}
	}

	Node<T>* root;	

};
