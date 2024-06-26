/*
a. 
Your Own Linked List : 
Design your own linked list class to hold a series if integers.  
The class should have member functions for appending, inserting, and deleting nodes.  
Don't forget to add a destructor that destroys the list.  
Demonstrate the class with  a driver program.

b. 
List Print : 
Modify the link list class you created above to add a print member function.  
The function should display all the values in the linked list.  Test the member function.  
The function should display all the values in the linked list.  
Test the class by starting with an empty list, adding some elements, then printing the resulting list out.

c. 
List Copy Constructor:  
Modify your linked list class to add a copy constructor.  
Test your class by making a list, making a copy of the list, then displaying the values in the copy.

d. 
List Reverse:  
Modify the linked list class you created , by adding a member function named reverse the rearranges the nodes in the list so their order is reversed. 
Demonstrate the functon in a simple driver program.
*/

#include "stdafx.h"
#include<iostream>
#include "LinkedList.h"

using namespace std;
int main()

{

	//         declare a variable of type linked list

	LinkedList myList;



	//declare other variables

	char choice;

	int n;



	//let the user know about the program

	cout << "\n\n\tA program to demonstrate LinkedList class.";



	//print a list of choices

	do {

		cout << "\n\n\tAppend a node  :  A";

		cout << "\n\tInsert a node  :  I";

		cout << "\n\tDelete a node  :  D";

		cout << "\n\tPrint the list :  P";

		cout << "\n\tReverse Print the list :  R";

		cout << "\n\tQuit           :  Q";



		//         prompt and read the user's choice 

		cout << "\n\n\tEnter your choice: ";

		cin >> choice;



		//         do appropriate action basing on choice selected

		switch (choice)

		{

		case 'A':

		case 'a':

			//         prompt and read an integer

			cout << "\tEnter an integer: ";

			cin >> n;



			//         append the number into list  

			myList.appendNode(n);

			break;



		case 'I':

		case 'i':

			//         prompt and read an integer

			cout << "\tEnter an integer: ";

			cin >> n;



			//         insert the number into list     

			myList.insertNode(n);

			break;



		case 'D':

		case 'd':

			//         prompt and read an integer

			cout << "\tEnter an integer :  ";

			cin >> n;



			//         delete the number from list  

			myList.deleteNode(n);

			break;



		case 'P':

		case 'p':

			// print the numbers in the list          

			myList.print();

			break;

		case 'r':

		case 'R':           //         print the elements in the list in reverse order

			cout << "\n\n\tIn Reverse Order";

			myList.reverseList();

			myList.print();

			break;





		case 'Q':

		case 'q':

			choice = 'q';

		}           //         end switch



	} while (choice != 'q');           //         end do-while



									   //         create list using copy constructor

	cout << "\n\n\tCreating another list using copy constructor.";

	LinkedList list2(myList);



	//         print the elements in the list

	cout << "\n\n\tAfter list creation";

	list2.print();

	system("pause");

	return 0;        

}                                 