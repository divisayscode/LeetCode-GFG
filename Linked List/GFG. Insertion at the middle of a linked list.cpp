class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
    Node *node=new Node(x);
    Node *t=head;
    int len=0;
    int mid=0;
    if(head==NULL)
    {
        head=node;
        return head;
    }
    while(t!=NULL)
    {
        len++;
        t=t->next;
    }
    mid=(len-1)/2;
    t=head;
    while(mid--)
    {
        t=t->next;
    }
    node->next=t->next;
    t->next=node;
    
    return head;    
    }
};
