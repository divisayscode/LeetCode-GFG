class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int low=0;
    int high=0;
    int n=prices.size();
    int profit=0;
    int ans=0;
    for(high=0;high<n;high++)
    {
        //include high in my main information and this is a variable size window problem 
        
        while(prices[low]>prices[high])
        {
            low++;
        }
        profit=prices[high]-prices[low];
        ans=max(ans,profit);
     
    } 
    if(ans==0)
    {
        return 0;
    }  
    return ans; 
    }
};
