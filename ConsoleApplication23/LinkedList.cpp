#include "stdafx.h"
#include "LinkedList.h"
#include<iostream>
using namespace std;


//Modify the linked list class you created , by adding a member function named reverse the rearranges the nodes in the list so their order is reversed.
//Demonstrate the functon in a simple driver program.

LinkedList::LinkedList(const LinkedList& otherList)

{

	head = NULL;

	ListNode *N_Node;
	ListNode *nodePtr;    
	ListNode *tempPtr; 
	
	//check for other list to be empty

	if (!otherList.head)

		return;

	//nodePtr points to the list to be copied

	nodePtr = otherList.head;

	//first node copy

	head = new ListNode;

	head->value = nodePtr->value;

	head->next = NULL;

	//move to the next node

	nodePtr = nodePtr->next;

	//tempPtr points to the list to be developed

	tempPtr = head;



	//copy leftover list

	while (nodePtr != NULL)

	{

		N_Node = new ListNode;

		N_Node->value = nodePtr->value;

		N_Node->next = NULL;

		tempPtr->next = N_Node;

		tempPtr = N_Node;

		nodePtr = nodePtr->next;

	}       
}     


void LinkedList::appendNode(int num)

{

	ListNode *N_Node;

	ListNode *nodePtr;

	N_Node = new ListNode;

	N_Node->value = num;

	N_Node->next = NULL;

	// If no nodes make new node.

	if (!head)

		head = N_Node;

	else  //insert new node at end.

	{

		//Initialize nodePtr.

		nodePtr = head;

		//Find last node.

		while (nodePtr->next)

			nodePtr = nodePtr->next;

		//Insert N_Node as last node.

		nodePtr->next = N_Node;

	}     
}        





void LinkedList::print() const

{

	ListNode *nodePtr;



	if (!head)

	{

		cout << "\n\tThe list is empty.";

		return;

	}

	nodePtr = head;

	cout << "\n\n\tThe elements in the list are:\n\t";

	// While nodePtr points to a node, traverse the list.

	while (nodePtr)

	{

		// Display the node value.

		cout << nodePtr->value << " -> ";

		// Move to the next node.

		nodePtr = nodePtr->next;

	}
	cout << "Null";
}    

//d. List Reverse: The function should display all the values in the linked list. 
//Test the class by starting with an empty list, adding some elements, then printing the resulting list out.


void LinkedList::reverseList()

{

	ListNode* newList = NULL;

	ListNode* current = head;

	//travels the list until you reach null, thus changing the order

	while (current)

	{

		ListNode* next = current->next;

		current->next = newList;

		newList = current;

		current = next;

	}

	//assign new list to head

	head = newList;

}


void LinkedList::insertNode(int num)

{

	ListNode *N_Node;            

	ListNode *nodePtr;             

	ListNode *previousNode = NULL;
						  
	 // Allocate a new node and store num there.

	N_Node = new ListNode;

	N_Node->value = num;

	N_Node->next = NULL;

	

	if (!head) // make newNode the first node

		head = N_Node;

	else  //insert newNode

	{

		// Position nodePtr at the head of list.

		nodePtr = head;



		//Initialize previousNode to NULL.

		previousNode = NULL;



		//Skip all nodes < num.

		while (nodePtr != NULL && nodePtr->value < num)

		{

			previousNode = nodePtr;

			nodePtr = nodePtr->next;

		}

		if (previousNode == NULL) //insert it before all other nodes.

		{

			head = N_Node;

			N_Node->next = nodePtr;

		}

		else  // insert after the previousnode.

		{

			previousNode->next = N_Node;

			N_Node->next = nodePtr;

		}

	}

}


void LinkedList::deleteNode(int num)

{

	ListNode *nodePtr;      

	ListNode *previousNode = NULL;





	if (!head) // If the list is empty, do nothing.

	{

		cout << "\n\tFailed to delete as list is empty.";

		return;

	}

	if (head->value == num) // Determine if the first node is the one.

	{

		nodePtr = head->next;

		delete head;

		head = nodePtr;

	}

	else

	{

		// Initialize nodePtr to head of list

		nodePtr = head;

		while (nodePtr != NULL && nodePtr->value != num)// Skip nodes value members  not equal to num.

		{

			previousNode = nodePtr;

			nodePtr = nodePtr->next;

		}



		

		

		if (nodePtr)// link the previous node to the node after nodePtr

		{

			previousNode->next = nodePtr->next;

			delete nodePtr;

		}

		else

			cout << "\n\tFailed to delete as " << num

			<< " not found in the list.";

	}          

}          

LinkedList::~LinkedList()

{

	ListNode *nodePtr;

	ListNode *nextNode;

	nodePtr = head;

	// While nodePtr is not at the end of the list...

	while (nodePtr != NULL)

	{

		// Save a pointer to the next node.

		nextNode = nodePtr->next;

		// Delete the current node.

		delete nodePtr;

		// Position nodePtr at the next node.

		nodePtr = nextNode;
	}         
}       
