#if 0

#include<iostream>

using namespace std;

int main() {

	system("pause>0");
}

#elif 0

#include<iostream>
using namespace std;

int main() {
	cout << "HelloWorld" << endl;
	system("pause>0");
}


#elif 0

#include<iostream>
using namespace std;


class Base {
public:
	virtual void Test(void) {
		cout << "This is Test Class Base" << endl;
	}

};

class Derived : public Base
{
public:
	void Test(void) {
		cout << "This is Test Class Derived" << endl;
	}
};

int main() {
	Base B_obj;
	Base* B_ptr;
	Derived D_obj;
	//B_obj.Test();
	//B_obj=  D_obj;
	B_ptr = &B_obj;
	B_ptr->Test();
	B_ptr = &D_obj;
	B_ptr->Test();

	system("pause>0");

}

#elif 0

#include<iostream>
#include<list>

using namespace std;

class Car {

public:
	int number_of_seats;
	list<string> CarName_Gen = { "Venue","Santro","i20_Active" };
	list<string> CarName_2 = {};
	Car() {
		number_of_seats = 1;
	};
	Car(int x) {
		number_of_seats = x;
	}
	void Display(void) {
		cout << "Number of Seats for each below vehicle is " << number_of_seats << endl;
		if (number_of_seats == 5)
			for (string str_var : CarName_Gen) {
				cout << str_var << endl;
			}
		else if (number_of_seats == 2) {
			for (string str_var : CarName_2) {
				cout << str_var << endl;
			}
		}

		else
			cout << "New Car Models not listed yet" << endl;

		

	}
};


int main() {
	Car car_obj1(5);
	car_obj1.Display();
	Car car_obj2(2);
	car_obj2.CarName_2.push_back("JLR_Coupe");
	car_obj2.CarName_2.push_back("Lamborgini");
	car_obj2.CarName_2.push_back("Mclaren");

	car_obj2.Display();
	Car car_obj3;
	car_obj3.Display();
	Car car_obj4 = car_obj1;
	car_obj4.Display();
	
	system("pause>0");
	return 0;
}


#elif 0

#include<iostream>
using namespace std;

#define SIZE 3

class Stack {
	int pos;
	int data[SIZE];

public:
	void init();
	void push(int val);
	int pop();
};

void Stack::init() {
	pos = 0;
}

void Stack::push(int val) {
	if (pos == SIZE) {
		cout << "Stack Overflow" << endl;
	}
	data[pos] = val;
	pos++;
}

int Stack::pop() {

	if (pos == 0) {
		cout << "Stack Underflow" << endl;
		return 0;
	}

	pos--;
	return data[pos];

}

int main() {
	Stack Obj1;
	Obj1.init();
	//Obj1.pop();
	Obj1.push(1);
	Obj1.push(2);
	Obj1.push(3);
//	Obj1.push(1);
	for(int i = 0; i<SIZE; i++)
		cout<<Obj1.pop()<<endl;
	//cout<<Obj1.pop();
	//cout<<Obj1.pop();
//	Obj1.pop();
	return 0;
}

#elif 1
// C++ program for the above approach 
#include <iostream> 
using namespace std; 

// Node class to represent 
// a node of the linked list. 
class Node { 
public: 
	int data; 
	Node* next; 

	// Default constructor 
	Node() 
	{ 
		data = 0; 
		next = NULL; 
	} 

	// Parameterised Constructor 
	Node(int data) 
	{ 
		this->data = data; 
		this->next = NULL; 
	} 
}; 

// Linked list class to 
// implement a linked list. 
class Linkedlist { 
	Node* head; 

public: 
	// Default constructor 
	Linkedlist() { head = NULL; } 

	// Function to insert a 
	// node at the end of the 
	// linked list. 
	void insertNode(int); 

	// Function to print the 
	// linked list. 
	void printList(); 

	// Function to delete the 
	// node at given position 
	void deleteNode(int); 
}; 

// Function to delete the 
// node at given position 
void Linkedlist::deleteNode(int nodeOffset) 
{ 
	Node *temp1 = head, *temp2 = NULL; 
	int ListLen = 0; 

	if (head == NULL) { 
		cout << "List empty." << endl; 
		return; 
	} 

	// Find length of the linked-list. 
	while (temp1 != NULL) { 
		temp1 = temp1->next; 
		ListLen++; 
	} 

	// Check if the position to be 
	// deleted is greater than the length 
	// of the linked list. 
	if (ListLen < nodeOffset) { 
		cout << "Index out of range"
			<< endl; 
		return; 
	} 

	// Declare temp1 
	temp1 = head; 

	// Deleting the head. 
	if (nodeOffset == 1) { 

		// Update head 
		head = head->next; 
		delete temp1; 
		return; 
	} 

	// Traverse the list to 
	// find the node to be deleted. 
	while (nodeOffset-- > 1) { 

		// Update temp2 
		temp2 = temp1; 

		// Update temp1 
		temp1 = temp1->next; 
	} 

	// Change the next pointer 
	// of the previous node. 
	temp2->next = temp1->next; 

	// Delete the node 
	delete temp1; 
} 

// Function to insert a new node. 
void Linkedlist::insertNode(int data) 
{ 
	// Create the new Node. 
	Node* newNode = new Node(data); 

	// Assign to head 
	if (head == NULL) { 
		head = newNode; 
		return; 
	} 

	// Traverse till end of list 
	Node* temp = head; 
	while (temp->next != NULL) { 

		// Update temp 
		temp = temp->next; 
	} 

	// Insert at the last. 
	temp->next = newNode; 
} 

// Function to print the 
// nodes of the linked list. 
void Linkedlist::printList() 
{ 
	Node* temp = head; 

	// Check for empty list. 
	if (head == NULL) { 
		cout << "List empty" << endl; 
		return; 
	} 

	// Traverse the list. 
	while (temp != NULL) { 
		cout << temp->data << " "; 
		temp = temp->next; 
	} 
} 

// Driver Code 
int main() 
{ 
	Linkedlist list; 

	// Inserting nodes 
	list.insertNode(1); 
	list.insertNode(2); 
	list.insertNode(3); 
	list.insertNode(4); 

	cout << "Elements of the list are: "; 

	// Print the list 
	list.printList(); 
	cout << endl; 

	// Delete node at position 2. 
	list.deleteNode(2); 

	cout << "Elements of the list are: "; 
	list.printList(); 
	cout << endl; 
	return 0; 
}

#endif
 