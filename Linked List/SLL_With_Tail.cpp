// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This is the implementation of Single Linked List with the head as well as the tail pointers
//The insert element at the back can now be acheived in O(1) time complexity
//Without the tail pointer it would take O(n) time complexity as we need to traverse till the last element

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct Node* root = NULL;
struct Node* tail = NULL;

void insertatback(int a)
{
	if (tail == NULL)
	{
		root = new Node(a);
		tail = root;
	}
	else
	{
		Node* curr = new Node(a);
		tail->next = curr;
		tail = curr;
	}
}

void reverse()
{
	Node* temp = root;
	Node* prev = NULL;
	Node* curr = NULL;

	tail = root;
	while (temp)
	{
		//curr = prev;
		prev = temp->next;
		temp->next = curr;
		curr = temp;
		temp = prev;

	}
	root = curr;
}

void print()
{
	if (!root)
		cout << "Empty List";
	else
	{
		Node* temp = root;
		while (temp)
		{
			cout << temp->data<<"\n";
			temp = temp->next;
		}
	}
}

int main()
{
	int t = 0, data = 0;
	cout << "Enter the number of elements of the list\n";
	cin >> t;
	while (t)
	{
		cin >> data;
		insertatback(data);
		t--;
	}
	print();
	reverse();
	insertatback(4);
	print();
}