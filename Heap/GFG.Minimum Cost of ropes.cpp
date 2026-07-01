class Solution {
  public:
    int minCost(vector<int>& arr) {
      //min heap 
      priority_queue<int,vector<int>,greater<int>>pq;
      int n=arr.size();
      for(int i=0;i<n;i++)
      {
          pq.push(arr[i]);//it will get sorted in the min element at top type 
      }
      int cost=0;
      //i want to pop 2 values and add for totalcost
      while(pq.size()>1)
      {
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        int sum=a+b;
        cost+=sum;
        pq.push(sum);
      }
      cost+=0;
      return cost;
         
    }
};
