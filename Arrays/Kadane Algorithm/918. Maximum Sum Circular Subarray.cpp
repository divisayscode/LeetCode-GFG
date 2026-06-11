class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
    //this is a case where you find max sum in a straight subarray and normal that is case 1 
    //when ans is at the ends and then u have to find min sum as that would be in s st line so subtracting from total ans gives us the max ans
    int bestending1=nums[0];
    int bestending2=nums[0];
    int ans1=nums[0];
    int ans2=nums[0];
    int finalans=nums[0];
    int total=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++)
    {
     //Case 1 normal array so maxsum 
     total=total+nums[i];
     bestending1=max(bestending1+nums[i],nums[i]);
     ans1=max(ans1,bestending1);
    
    bestending2=min(bestending2+nums[i],nums[i]);
    ans2=min(ans2,bestending2);
    finalans=max(ans1,total-ans2);
    }
if (ans2==total) return ans1;//we return ans1 as this givves us the safest ans as of normal kadanes 
return finalans;
    }
};
