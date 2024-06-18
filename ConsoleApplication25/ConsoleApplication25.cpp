/*
Write a program that outputs the nodes of a graph in a depth first traversal of a binary tree.
For this program you may need to do some research on how to graph the noes of a binary tree

*/

#include "stdafx.h"
#include<iostream>

using namespace std;

struct Node {

	int data;

	struct Node *L, *R;

	Node(int data)

	{
		this->data = data;

		L = R = NULL;
	}
};

void printPostorder(struct Node* node)

{
	if (node == NULL)

		return;

	printPostorder(node->L);

	printPostorder(node->R);

	cout << node->data << " ";

}

void printPreorder(struct Node* node)

{

	if (node == NULL)

		return;

	cout << node->data << " ";

	printPreorder(node->L);

	printPreorder(node->R);

}

void printInorder(struct Node* node)

{

	if (node == NULL)

		return;

	printInorder(node->L);

	cout << node->data << " ";

	printInorder(node->R);

}

int main()

{

	struct Node *root = new Node(1);

	root->L = new Node(5);

	root->R = new Node(75);

	root->L->L = new Node(41);

	root->L->R = new Node(55);

	cout << "\nPreorder traversal of binary tree: \n";

	printPreorder(root);

	cout << "\nInorder traversal of binary tree: \n";

	printInorder(root);

	cout << "\nPostorder traversal of binary tree: \n";

	printPostorder(root);

	system("pause");

	return 0;

}