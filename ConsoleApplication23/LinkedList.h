#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class LinkedList

{

private:

	// Declare a structure for the list

	struct ListNode

	{

		int value;                     // The value in this node

		struct ListNode *next;// To point to the next node

	};



	ListNode *head;                      // List head pointer



public:

	//         default constructor

	LinkedList()

	{
		head = NULL;
	}



	//Modify your linked list class to add a copy constructor. 

	LinkedList(const LinkedList& otherList);



	// Destructor

	~LinkedList();



	// Linked list operations

	void appendNode(int);

	void insertNode(int);

	void deleteNode(int);

	//Modify the link list class you created above to add a print member function.
	void print() const;

	//new method to your previous class

	void reverseList();

};

#endif