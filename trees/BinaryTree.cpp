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

#include "BinaryTree.h"

ostream& operator<< (ostream& out, BinaryTree tree) {
	tree.display(out);
	return out;
}

BinaryTree::BinaryTree() {
	root = NULL;
}

BinaryTree::~BinaryTree() {
	free(root);
}

void BinaryTree::display(ostream& os) {
	display(os, root);
}

bool BinaryTree::isLeaf(TreeNode* node) {
	if (node->leftChild == NULL && node->rightChild == NULL)
		return true;
	else return false;
}


void BinaryTree::free(TreeNode*& subtree) {
	if (subtree) {
		free(subtree->leftChild);
		free(subtree->rightChild);
		cout << "Deleting node: " << subtree->data << endl;
		delete subtree;
	}
}

void BinaryTree::display(ostream& os, TreeNode* subtree) {
	if (subtree) {
		os << subtree->data << endl;
		display(os, subtree->leftChild);
		display(os, subtree->rightChild);
	}
}