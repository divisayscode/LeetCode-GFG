class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //Proper Bit Manipulation question    
    int n=nums.size();
    int ans=0;
    int temp=0;
    for(int bit=0;bit<32;bit++)
    {
    //for every bit check all the numbers
    temp=(1<<bit);
    int countzero=0;
    int countones=0;
    for(int i=0;i<n;i++)
    {
       
       if((nums[i]&temp)==0)//here  bitwise & not logical and
       {
        countzero++;
       }
       else
       {
        countones++;
       }
    }

    if(countones%3==1)
    {
     ans=(ans|temp);
    }
    else if(countzero%3==0)
    {
        ans=(ans|temp);
    }

    } 
return ans;
    }
};
