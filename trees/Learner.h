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

#ifndef LEARNER_H
#define LEARNER_H

#include "BinaryTree.h"
#include "TreeNode.h"


class Learner {
	public:
		Learner();
		// display "Let me guess..." and asks questions until BinaryTree hits a leaf. Ask user if the leaf animal was correct.
		// if correct, print "I win." if not, learner must learn a new question and animal provided by the user. Continue until user wants to quit. Then display what
		//the learner learned by displaying its memory tree
		void learn();

	private:
		// holds learner's knowledge
		BinaryTree memory;
		// assuming subtree is not NULL, overwrites subtree->data with question and subtree->leftChild with yes_answer subtree->rightChild with no_answer
		void learn(string question, string yes_answer, string no_answer, TreeNode* subtree);

};

#endif