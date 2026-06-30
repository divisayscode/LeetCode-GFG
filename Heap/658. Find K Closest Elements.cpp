class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector<int>ans;
    int n=arr.size();
    int diff=0;
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<k;i++)
    {
        pq.push({abs(x-arr[i]),arr[i]});
    }
    for(int i=k;i<n;i++)
    {
        diff=abs(x-arr[i]);
        if(diff<pq.top().first)
        {

            pq.pop();
            pq.push({abs(x-arr[i]),arr[i]});
        }
        else
        {
            continue;
        }
    }
    while(!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
        
    }
};

/*adding the sort introduces an extra O(k log k) term, since ans has k elements. So the overall complexity is:
O(n log k + k log k)
Since k ≤ n, this simplifies to O(n log k) overall (the k log k term is dominated by n log k). So it doesn't change the asymptotic complexity class — it's still O(n log k), not O(n log n), unless k is very close to n (in which case log k ≈ log n anyway, so it still matches).
So your intuition is right that sorting adds work, but it doesn't push you up to O(n log n) territory — it's absorbed into the existing O(n log k) bound since both the heap operations and the final sort scale with the same log k factor.*/
