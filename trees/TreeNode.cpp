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

#include "TreeNode.h"
#include<iostream>
#include<string>
using namespace std;

TreeNode::TreeNode(string data) {
	this->data = data;
	leftChild = rightChild = NULL; 
}

TreeNode::TreeNode(string data, TreeNode* leftChild, TreeNode* rightChild) {
	this->data = data;
	this->leftChild = leftChild;
	this->rightChild = rightChild;
}