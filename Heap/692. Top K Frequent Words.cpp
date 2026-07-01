typedef pair<int,string>ppi;
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string,int>mp;
    vector<string>ans;
struct cmp
{
    bool operator()(const pair<int,string>& a, const pair<int,string>& b) const
    {
        if(a.first==b.first)
            return a.second<b.second;
        return a.first>b.first;
    }
};
    priority_queue<ppi,vector<ppi>,cmp>pq;
    for(int i=0;i<words.size();i++)
    {
        mp[words[i]]++;//map that has string and frequency 
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        pq.push({it->second,it->first});
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    while(!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};
