#include <iostream>

using namespace std;


class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution{
	public:
	
	Node* insert(Node* root,int a)
	{
		if(root==NULL)
		{
			root = new Node(a);
		}
		else
		{
			Node *curr;
			curr = root;
			if(curr->data>=a)
			{
				curr = insert(root->left,a);
				root->left = curr;
			}
			else
			{
				curr = insert(root->right,a);
				root->right = curr;
			}
			return root;
		}
	}
    void inOrder(Node *root) {
        if(root)
        {
            if(root->left)
                inOrder(root->left);
            cout<<root->data<<" ";
            if(root->right)
                inOrder(root->right);
        }
    }
	int height(Node *root)
	{
		int lh =0, rh =0;
		if(root==NULL)
			return 0;
		if(root->left)
		{
			lh = height(root->left)+1;
		}
		if(root->right)
		{
			rh = height(root->right)+1;
		}
		return max(lh,rh);
	}
};		
int main()
{
    /*Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);*/

	Node *root = NULL;
	Solution sol;

	int t=0, data=0;
	cout<<"Enter the number of elements of the tree\n";
	cin>>t;
	while(t)
	{	cin>>data;
		root = sol.insert(root,data);
		t--;
	}
	 
    cout << "\nThe height of binary tree is \n";
    cout<<sol.height(root);
 
	return 0;
}