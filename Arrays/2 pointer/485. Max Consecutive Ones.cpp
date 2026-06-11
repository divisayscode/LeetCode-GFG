class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0; // this variable holds the max consecutive number 
        int count=0; //this is gonna be counting the number of 1 in the array
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++; // we can increase count by 1 
                if(count>max) 
                {
                    max=count;
                }
            }
            else
            {
                count=0;
            }
        }
        return max;
    }
};
