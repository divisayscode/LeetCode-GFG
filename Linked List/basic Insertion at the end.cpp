/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* node=new Node(x);
        Node*t =head;
        if(head==NULL)
        {
            // head=node;
            return node;
        }
        while(t->next!=NULL)
        {
            t=t->next;
            
        }
       
        t->next=node;
           
      return head;  
    }
};
