/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        //head diya rhega 
        Node* t =head;
        vector<int>ans;//t me 100 agya suppose head was 100
        while(t!=NULL){
        ans.push_back(t->data);
        t=t->next;// 200 
        }
        return ans;
    }
};
