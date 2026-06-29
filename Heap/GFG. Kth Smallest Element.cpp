class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
    priority_queue<int>pq;
    int n=arr.size();
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);//max heap largest 10 .. 10 5 4 3 6 
    }
    for(int i=k;i<n;i++)//48 
    {
     if(arr[i]>pq.top())
     {
         continue;
     }
     else
     {
        pq.pop(); 
        pq.push(arr[i]); //2
     }
    }
    return pq.top();   
    }
};
