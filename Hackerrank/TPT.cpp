/* you only have to complete the function given below.  
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

*/


    void postOrder(Node *root) {
        if(root){
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
        }
    }

}; 