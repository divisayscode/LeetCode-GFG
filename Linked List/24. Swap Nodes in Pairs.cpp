class Solution {
public:
    ListNode* reverse(ListNode* head,int times)
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(times--)
        {
            ListNode* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    ListNode* swapPairs(ListNode* head) {
    ListNode* left=head;
    ListNode* right=left;//100
    ListNode* prevleft=NULL;
    ListNode* curr=head;

    if(head==NULL ||head->next==NULL)  return head;
    ListNode* ans=head->next;
    while(left!=NULL && left->next!=NULL)
    {
     ListNode* nextleft;
     right=left->next;
     nextleft=right->next;
     reverse(left,2);

     if(prevleft!=NULL)
     {
        prevleft->next=right;
        
     }
        left->next=nextleft;
        prevleft=left;
        left=nextleft;

    }
    return ans;
    }
};
