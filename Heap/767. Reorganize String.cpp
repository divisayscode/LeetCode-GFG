class Solution {
public:
    string reorganizeString(string s) {
    int n=s.length();
    string ans="";
    //max heap for that we want to sort the ones jo max time aaye hoye hai 
    priority_queue<pair<int,char>>pq;
    unordered_map<char,int>mp;  
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]>(n+1)/2) return "";
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        pq.push({it->second,it->first});
    }  
    while(pq.size()>=2)
    {
        auto p1=pq.top(); pq.pop();
        auto p2=pq.top(); pq.pop();
        ans.push_back(p1.second);
        ans.push_back(p2.second);
        p1.first--;
        p2.first--;
        if(p1.first>0) 
       { 
        pq.push(p1);
       }
       if(p2.first>0) 
       { 
        pq.push(p2);
       }

    }
    if(!pq.empty())                     
{
    ans.push_back(pq.top().second); 
}
    return ans;
    }
};
