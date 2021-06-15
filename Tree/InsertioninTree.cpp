#include <iostream>

using namespace std;


struct Node {

        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

Node* insert(Node* root, int val)
{
	if(!root)
	{
		root = new Node(val);
	}
	else
	{
		if(root->data>val)
		{
			root->left=insert(root->left,val);
		}
		if(root->data<val)
		{
			root->right=insert(root->right,val);
		}
	}
	return root;
}

    void preOrder(struct Node *root) {
        
        if(root)
        {
            cout<<root->data<<" ";
            if(root->left)
                preOrder(root->left);
            
            if(root->right)
                preOrder(root->right);
        }
    }

int main()
{
    struct Node* root = NULL;
    int val;
    int n;
    cin>>n;//number of elements of tree

    while(n--)
    {
	cin>>val;//value to be inserted
	root=insert(root,val);
    }
 
    cout << "\nPreorder traversal of binary tree is \n";
    preOrder(root);
 
	return 0;
}