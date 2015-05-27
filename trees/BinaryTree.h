/*
Matthew Chan					    PIC 10B Intermediate Programming
ID: 604178275          		  		Winter 2015
Email: matthew.a.chan@gmail.com		Assignment #7
Section: 2B
Honesty Pledge:

I, Matthew Chan, pledge that this is my own independent
work,which conforms to the guidelines of academic honesty as
described in the course syllabus.

List of known bugs: None.
*/

#ifndef BINARY_TREE
#define BINARY_TREE

#include <iostream>
#include "TreeNode.h"

class BinaryTree {

	friend class Learner;
	friend ostream& operator<< (ostream& out, BinaryTree tree);

public:
	BinaryTree();
	~BinaryTree();
	// Displays the preorder traversal STARTING AT THE ROOT
	void display(ostream& os);
private:
	TreeNode* root;
	bool isLeaf(TreeNode* node);
	// Prints out the subtree's values in postorder. Then disallocates them one at time
	void free(TreeNode*& subtree);
	// Uses preorder traversal from the subtree
	void display(ostream& os, TreeNode* subtree);
};

#endif