/*
Write a program that outputs the nodes of a graph in a depth first traversal of a binary tree.
For this program you may need to do some research on how to graph the noes of a binary tree

*/

#include "stdafx.h"
#include<iostream>

using namespace std;

struct Node {

	int data;

	struct Node *left, *right;

	Node(int data)

	{
		this->data = data;

		left = right = NULL;
	}
};

void printPostorder(struct Node* node)

{
	if (node == NULL)

		return;

	printPostorder(node->left);

	printPostorder(node->right);

	cout << node->data << " ";

}

void printPreorder(struct Node* node)

{

	if (node == NULL)

		return;

	cout << node->data << " ";

	printPreorder(node->left);

	printPreorder(node->right);

}

void printInorder(struct Node* node)

{

	if (node == NULL)

		return;

	printInorder(node->left);

	cout << node->data << " ";

	printInorder(node->right);

}

int main()

{

	struct Node *root = new Node(1);

	root->left = new Node(5);

	root->right = new Node(75);

	root->left->left = new Node(41);

	root->left->right = new Node(55);

	cout << "\nPreorder traversal of binary tree is \n";

	printPreorder(root);

	cout << "\nInorder traversal of binary tree is \n";

	printInorder(root);

	cout << "\nPostorder traversal of binary tree is \n";

	printPostorder(root);

	return 0;

}