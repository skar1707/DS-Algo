
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

};
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);
 
	return 0;
}