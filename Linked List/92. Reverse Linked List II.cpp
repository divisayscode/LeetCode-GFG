/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(left==right) return head;
    int count=1;
    ListNode* curr=head;
    ListNode* prev=NULL;
    ListNode* first=NULL;
    ListNode* last=NULL;
while(curr!=NULL){
  if(count<left)
  {
    first=curr;//only storing the address of the first node that is 1 
    curr=curr->next;//shifting the curr pointer
    count++;
    
  }
  else if(count>=left  && count<=right)
  {
    if(count==left)  last=curr;//save the 2 as at the end we need to connect this 
    ListNode* nex=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nex;
    count++;
  } // this will work for the positions between and reverse the elements  
  else
  {
    break;//we are out now 
  }
  //now reconnection outside the loops 

}
  last->next=curr;
  if(first!=NULL)first->next=prev;
  else head=prev;
  return head;
    }
};
