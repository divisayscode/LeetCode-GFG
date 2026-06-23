class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    //THIS IS A CONCEPT OF PREFIX SUM 
    //REMEMBER THAT THE SUM OF ARRAY , LEFT(PREFIX SUM) AND THE RIGHT(SUFFIX SUM ) IS EQUAL TO THE ARRAY SUM SO USING THAT I CAN SOLVE OR ELSE TAKE OUT PREFIX SUM AND SUFFIX SUM USING 2 VECTORS THEN EQUATE AND RETURN INDEX
    int n=nums.size();
    int left=0;
    int right=0;
    int sum=0;

    //i=0 the left is going to be 0 only 
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
    }
    
    if(sum-nums[0]==0) return 0;
    for(int i=1;i<n;i++)
    {
   
    left+=nums[i-1];
    right=sum-nums[i]-left;
    if(left==right)
    {
        return i;
    }

    }
    return -1;
    }
};
