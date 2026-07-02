//Total: O(n log n + k log n)
//Space Complexity: O(n) — for maximum_capital and the priority queue, which together hold at most n elements.
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
    vector<pair<int,int>>maximum_capital;
    priority_queue<int>pq;
    int n=profits.size();
    for(int i=0;i<n;i++)
    {
        maximum_capital.push_back({capital[i],profits[i]});
    }
    sort(maximum_capital.begin(),maximum_capital.end());
    int i=0;
    while(k--)
   { while(i<n)
    {
        if(maximum_capital[i].first>w) break;
        else
        {
            pq.push(maximum_capital[i].second);
            i++;
        }

    }
    if(pq.empty())
    {
        break;
    }
    int ans=pq.top();
    pq.pop();
    w+=ans;
    
   }
  return w;

    }
};
