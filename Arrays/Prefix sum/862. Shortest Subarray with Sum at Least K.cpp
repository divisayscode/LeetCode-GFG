class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
    int n=nums.size();
    //using monotonic deque because we want to ignore the element before the dip as it wont matter much
    deque<int>deq;//creating a deque to store the indeces of the cumulativesum 
    vector<long long>Cumulativesum(n,0);//this was issue dont use int use long long 
    //this is kind of a sliding window question but  we cannot implement sliding window on negative numbers so applying some different approach but that  type of a template
    int high=0;
    int result=INT_MAX;
    while(high<n)
    {
     //first the cumulative sum shall hold values
     if(high==0) Cumulativesum[high]=nums[0];
     else
     {
        Cumulativesum[high]=Cumulativesum[high-1]+nums[high];
     }
     if(Cumulativesum[high]>=k)
     {
        result=min(result,high+1);
     }
     
     while(!deq.empty() && Cumulativesum[high]-Cumulativesum[deq.front()]>=k)
     {
        //thts now that we shrink
        result=min(result,high-deq.front());
        deq.pop_front();
     }
     while(!deq.empty() && Cumulativesum[high]<=Cumulativesum[deq.back()])
     {
     deq.pop_back();
     }
     deq.push_back(high);
    high++;
    }
    return result==INT_MAX?-1:result;
    }
};
