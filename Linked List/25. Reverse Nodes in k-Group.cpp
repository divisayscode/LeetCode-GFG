class Solution {
public:
    ListNode* reverse(ListNode* head, int times)
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
    ListNode* reverseKGroup(ListNode* head, int k) {
    if(head==NULL || head->next==NULL) return head;
    ListNode* left=head;
    ListNode* prevleft=NULL;
    ListNode* right=NULL;
    ListNode* ans=NULL;
    while(left!=NULL)
    {
        ListNode* check=left;
        for(int i=0;i<k;i++)
        {
            if(check==NULL) return ans==NULL?left:ans;
            check=check->next;
        }
        right=check;
        ListNode* nextleft=right;
        ListNode* newleft=reverse(left,k);
        if(ans==NULL) ans=newleft;
        if(prevleft!=NULL) prevleft->next=newleft;
        left->next=nextleft;
        prevleft=left;
        left=nextleft;
    }
    return ans;
    }
};
