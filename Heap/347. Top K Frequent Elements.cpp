typedef pair<int,int>ppi;
class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
    //hashmap for the frequency of the numbers then on the basis of frequency as my key i will do the heap sorting and return the top k elements 
    unordered_map<int,int>f;
    priority_queue<ppi,vector<ppi>,greater<ppi>>pq;//min  heap 
    int n=nums.size();
    for(int  i=0;i<n;i++)
    {
        f[nums[i]]++;
    }  
   for(auto it=f.begin();it!=f.end();it++)
   {
    pq.push({it->second,it->first});
    if(pq.size()>k)
    {
        pq.pop();
    }
   }
       vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
