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
#include "BinaryTree.h"
#include<iostream>
#include<string>
using namespace std;

int main(){


	Learner* l = new Learner();
	l->learn();
	cout << endl;
    delete l;
    l = NULL;
	system("PAUSE");
	return 0;
}