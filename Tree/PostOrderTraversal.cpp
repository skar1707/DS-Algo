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

    void postOrder(struct Node *root) {
        
        if(root)
        {
            if(root->left)
                preOrder(root->left);
            
            if(root->right)
                preOrder(root->right);

	    cout<<root->data<<" ";
        }
    }

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    cout << "\nPostorder traversal of binary tree is \n";
    postOrder(root);
 
	return 0;
}