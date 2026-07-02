class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
    unordered_map<char,int>mp;
    priority_queue<int>pq;
    int s=tasks.size();
    int time=0;

    for(int i=0;i<s;i++)
    {
        mp[tasks[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        pq.push(it->second);
    }

    while(!pq.empty())
    {
        vector<int> temp;
        for(int i=1;i<=n+1;i++)
        {
            if(!pq.empty())
            {
                int freq=pq.top();
                pq.pop();
                freq--;
                temp.push_back(freq);
            }
        }

        for(int &f:temp)
        {
            if(f>0)
            {
                pq.push(f);
            }
        }

        if(pq.empty())
        {
            time+=temp.size();
        }
        else
        {
            time+=n+1;
        }
    }

    return time;
    }
};
