typedef pair<int,int>ppi;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
    unordered_map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;//map stores the values and their frequency
    }  
    priority_queue<ppi,vector<ppi>,greater<ppi>>pq;//min heap 
    //traverse the map and push the mp.second as frequency will be the key 
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        pq.push({it->second,-it->first});   
    }
    while(!pq.empty())
    {   
        //i need something that the count many times my value comes 
        int  a =pq.top().first;
        while(a--)
       { ans.push_back(-pq.top().second);}
        pq.pop();
    }
return ans;
    }
};
