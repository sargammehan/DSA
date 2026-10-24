/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
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
        if(fast==NULL || fast->next==NULL) return;
        slow=head;

        while(temp!=slow)
        {
            slow=slow->next;
            temp=temp->next;
        }
        
        Node* first=temp;
        while(temp->next != first)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        return;
    }
};