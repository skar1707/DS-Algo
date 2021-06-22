// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

Node* insert(Node* root, int a)
{
	if (root == NULL)
	{
		root = new Node(a);
	}
	else
	{
		Node* curr = root;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new Node(a);
	}
	return root;
}

Node* reverse(Node* root)
{
	if (!root)
		return NULL;

	Node* temp = root;
	Node* prev = NULL;
	Node* curr = NULL;

	while (temp)
	{
		//curr = prev;
		prev = temp->next;
		temp->next = curr;
		curr = temp;
		temp = prev;

	}
	root = curr;
	return root;
}

void print(Node* root)
{
	if (!root)
		cout << "Empty List";
	else
	{
		Node* temp = root;
		while (temp)
		{
			cout << temp->data;
			temp = temp->next;
		}
	}
}

int main()
{
    struct Node* root = NULL;
	int t = 0, data = 0;
	cout << "Enter the number of elements of the list\n";
	cin >> t;
	while (t)
	{
		cin >> data;
		root = insert(root, data);
		t--;
	}
	root = reverse(root);

}