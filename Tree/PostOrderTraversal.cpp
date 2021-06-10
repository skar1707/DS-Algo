
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


    void postOrder(Node *root) {
        
        if(root)
        {
            
            if(root->left)
                preOrder(root->left);
            
            if(root->right)
                preOrder(root->right);

	    cout<<root->data<<" ";
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
 
    cout << "\nPostorder traversal of binary tree is \n";
    postorder(root);
 
	return 0;
}