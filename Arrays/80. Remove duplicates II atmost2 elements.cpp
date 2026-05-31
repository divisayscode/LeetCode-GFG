class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i=0;
    int j=1;
    int n=nums.size();
    int unique=1;
    int count=1;
    while(j<n)
    {
     if(nums.empty()) return 0;
     else if(nums[j]!=nums[i])
     {
     nums[i+1]=nums[j];
     i++;
     unique++;
     count=1;
     }
    else {
     
     if(count<2){
      nums[i+1]=nums[j];
      i++;
      count++; 
      unique++;
          
     }
     }
     j++;
     }    
    return unique;   
    }
};
