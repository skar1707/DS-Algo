
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


    void preOrder(Node *root) {
        
        if(root)
        {
            cout<<root->data<<" ";
            if(root->left)
                preOrder(root->left);
            
            if(root->right)
                preOrder(root->right);
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
 
    cout << "\nPreorder traversal of binary tree is \n";
    preorder(root);
 
	return 0;
}