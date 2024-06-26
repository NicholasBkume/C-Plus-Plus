﻿/*
Write a program that outputs the nodes of a graph in a depth first traversal of a binary tree.
For this program you may need to do some research on how to graph the noes of a binary tree

*/

#include "stdafx.h"
#include <iostream>
using namespace std;

// Node structure for a binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize the node with data
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to perform postorder traversal of the binary tree
void printPostorder(Node* node) {
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}

// Function to perform preorder traversal of the binary tree
void printPreorder(Node* node) {
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

// Function to perform inorder traversal of the binary tree
void printInorder(Node* node) {
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

// Function to delete the binary tree and free memory
void deleteTree(Node* node) {
    if (node == NULL)
        return;
    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}

int main() {
    // Constructing the binary tree
    Node* root = new Node(1);
    root->left = new Node(5);
    root->right = new Node(75);
    root->left->left = new Node(41);
    root->left->right = new Node(55);

    // Performing and printing tree traversals
    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    // Deleting the binary tree and freeing memory
    deleteTree(root);

    return 0;
}
