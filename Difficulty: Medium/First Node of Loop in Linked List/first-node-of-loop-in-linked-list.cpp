/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        // code here
        
        
        Node* slow=head;
        Node* fast=head;
        Node* temp=NULL;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                temp=fast;
                break;
            }
        }
        
        
        if(fast==NULL || fast->next==NULL) return -1;
        
        slow=head;
        
        while(temp!=slow)
        {
            slow=slow->next;
            temp=temp->next;
        }
        return temp->data;
        
    }
};