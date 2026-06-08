//Length of the linked list 
class Solution {
public:
    int getLength(ListNode* head) {
        ListNode* t=head;
        int count=0;
        if(head==NULL)
        {
            return 0;
        }
        while(t!=NULL)
        {
            t=t->next;
            count++;
        }
        return count;
    }
};
//Insertion at the beginning
class Solution {
    public:
        ListNode* insertAtHead(ListNode* &head, int X) {
        ListNode* node=new ListNode(X);
        if(head==NULL)
        {
            head=node;
            return head;
        }
        node->next=head;
        head=node;
        return head;
        }
};
//Insertion at any position 
class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
    Node * node=new Node(val);
    Node *t =head;
    int count=1;//imp
    
    if(pos==1)
    {
        node->next=head;
        head=node;
        return head;
    }
    while(t!=NULL)
    {
      
      if(count==pos-1)
      {
          node->next=t->next;
          t->next=node;
      }
      count++;
      t=t->next;
      
    }
    return head;
    }
};


//Insertion at the end
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
