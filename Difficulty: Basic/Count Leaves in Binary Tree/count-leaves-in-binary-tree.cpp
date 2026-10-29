/* Binary Tree node Structure 
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
 */

class Solution {
  public:
  void solve(Node* root,int &count){
      if(root==NULL){
          return;
      }
      solve(root->left,count);
      if(root->left==NULL && root->right==NULL){
          count++;
      }
      solve(root->right,count);
  }
    int countLeaves(Node* root) {
        // code here
        int count=0;
        solve(root,count);
        return count;
    }
};