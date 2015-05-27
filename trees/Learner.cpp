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

#include "Learner.h"

Learner::Learner() {
	TreeNode* left = new TreeNode("dog");
	TreeNode* right = new TreeNode("snake");
	memory.root = new TreeNode("Does it have legs?", left, right);
}

void Learner::learn() {
	cout << "Let me guess which animal you are thinking of...\n" << endl; 

	char input;
	string newAnimal;
	string newQuestion;
	bool quit = false;

	while (!quit) {
		TreeNode* node = memory.root;
		// Keep asking the user questions and traversing the tree until you reach a leaf
		while (!memory.isLeaf(node)) {
			cout << node->data << " ('y' for \"yes\" or 'n' for \"no\"): ";
			cin >> input;
			if (input == 'y')
				node = node->leftChild;
			else if (input == 'n')
				node = node->rightChild;
		}
		cout << "Is it a " << node->data << "? ";
		cin >> input;
		if (input == 'y')
			cout << "I win!" << endl;
		else if (input == 'n') {
			cout << "I was wrong. What animal was it? ";
			getline(cin, newAnimal);
			getline(cin, newAnimal);
			cout << "Ask a question whose answer is yes for " << newAnimal << " but no for " << node->data << ":\n";
			getline(cin, newQuestion);
			learn(newQuestion, newAnimal, node->data, node);
		}
		cout << "Try again? Enter 'y' for \"yes\" or 'n' for \"no\": ";
		cin >> input;
		if (input == 'y')
			quit = false;
		else if (input == 'n') {
			quit = true;
			cout << "\nHere's what I have learned:\n";
			memory.display(cout);
			cout << endl;
		}
	}
}

void Learner::learn(string question, string yes_answer, string no_answer, TreeNode* subtree) {
	if (subtree != NULL) {
		TreeNode* left = new TreeNode(yes_answer);
		TreeNode* right = new TreeNode(no_answer);
		subtree->leftChild = left;
		subtree->rightChild = right;
		subtree->data = question;
	}
}