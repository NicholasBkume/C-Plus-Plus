/*
a. Write definition of the function to implement the nonrecursive postorder traversal algorithm.
b. Write C++ program to test the non recursive in-order, preorder, and post order traversal algorithms. (note: First Create a binary tree.)
*/

#include "stdafx.h"
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

//create pointer to left child and a pointer to right child

struct Node{
	int data;

	struct Node* L;

	struct Node* R;

	Node(int data){

		this->data = data;

		L = R = NULL;

	}

};

//Iterative function for in order traversal algorithm

void inOrder(struct Node *root)

{

	stack<Node *> s;

	Node *cur = root;

	while (cur != NULL || s.empty() == false)

	{

		while (cur != NULL)

		{

			//place pointer to a tree node on the stack

			s.push(cur);

			cur = cur->L;

		}

		cur = s.top();

		s.pop();

		cout << cur->data << " ";

		cur = cur->R;

	}

}

void preOrder(Node *root)

{

	if (root == NULL)

		return;

	//Create an empty stack and push root to it

	stack<Node *> nodeStack;

	nodeStack.push(root);

	while (nodeStack.empty() == false)

	{

		// Pop top item from stack and print it

		struct Node *node = nodeStack.top();

		printf("%d ", node->data);

		nodeStack.pop();

		// Push right and left children of the nodes to the stack

		if (node->R)

			nodeStack.push(node->R);

		if (node->L)

			nodeStack.push(node->L);

	}

}

void postOrderIterative(Node* root)

{

	if (root == NULL)

		return;

	//Create two stacks

	stack<Node *> s1, s2;

	//push root

	s1.push(root);

	Node* node;

	//Run while first stack is not empty

	while (!s1.empty()) {

		node = s1.top();

		s1.pop();

		s2.push(node);

		// Push left and right children

		if (node->L)

			s1.push(node->L);

		if (node->R)

			s1.push(node->R);

	}

	// Print all elements of the second stack

	while (!s2.empty()) {

		node = s2.top();

		s2.pop();

		cout << node->data << " ";

	}

}

int main()

{
	//binary tree

	struct Node *root = new Node(1);

	root->L = new Node(2);

	root->R = new Node(3);

	root->L->L = new Node(4);

	root->L->R = new Node(5);

	cout << "\nIN ORDER TRAVERSAL: ";

	inOrder(root);

	cout << "\nPRE ORDER TRAVERSAL: ";

	preOrder(root);

	cout << "\nPOST ORDER TRAVERSAL: ";

	postOrderIterative(root);

	system("pause");

	return 0;

}