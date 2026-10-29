/* Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        bool val;
        
        if(root == NULL) return false;
        if(root->data == key) return true;
        
        if(key<root->data)
            val=search(root->left, key);
        else
            val=search(root->right, key);
        return val;
    }
};