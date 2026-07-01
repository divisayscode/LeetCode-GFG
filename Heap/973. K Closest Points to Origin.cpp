typedef pair<int,pair<int,int>>ppi;
class Solution {
public:
//2D matrix is quite different
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    priority_queue<ppi>pq;
    vector<vector<int>>ans;
    int n=points.size();
    
    for(int i=0;i<n;i++)
    {
        int x=points[i][0];
        int y=points[i][1];
        int distance=x*x+y*y;
        pq.push({distance,{x,y}});
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    while(!pq.empty())
    {
        ans.push_back({pq.top().second.first,pq.top().second.second});
        pq.pop();
    }
    return ans;
    
    }
};
