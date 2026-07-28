#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* leftptr;//These are the pointers so node datatype
    Node* rightptr;
    Node(int val)
    {
      data=val;
      leftptr=NULL;
      rightptr=NULL;
    }
};

int main() {
Node* root=new Node(0);
root->leftptr=new Node(1);
root->rightptr=new Node(2);
root->leftptr->rightptr=new Node(4);
return 0;

}
