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

#ifndef TREENODE_H
#define TREENODE_H
#include<string>
using namespace std;

class TreeNode {

	friend class BinaryTree;
	friend class Learner;

	public:	
		TreeNode(string data);
		TreeNode(string data, TreeNode* left, TreeNode* right);
	
	private:
		string data;
		TreeNode* leftChild;
		TreeNode* rightChild;
};

#endif