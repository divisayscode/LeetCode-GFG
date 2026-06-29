class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=arr.size();
        int indx=0;
        for(int i=0;i<k+1;i++)
        {
            pq.push(arr[i]);
        }
        for(int i=k+1;i<n;i++)
        {
            arr[indx]=pq.top();
            indx++;
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty())
        {
            arr[indx]=pq.top();
            indx++;
            pq.pop();
        }
    }
};
