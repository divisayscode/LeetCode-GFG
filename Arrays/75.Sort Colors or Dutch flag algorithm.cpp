// Counting Sort: O(n) time, O(1) space (two-pass solution)
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
     int n=nums.size();
     int count0=0;
     int count1=0;
     int count2=0;
     for(int i=0;i<n;i++){
     if(nums[i]==0) {
        count0++;
     }
     else if(nums[i]==1)
     {
        count1++;
     }
     else{
        count2++;
     }
     }

     for(int i=0;i<count0;i++)
     {
        nums[i]=0;
     }
     for(int i=count0;i<count0+count1;i++)
     {
        nums[i]=1;
     }
     for(int i=count0+count1;i<count0+count1+count2;i++)
     {
        nums[i]=2;
     }

    }
};
//this is the best case solution in a single pass time 
// Dutch National Flag Algorithm: O(n) time, O(1) space (single-pass solution)
class Solution {
public:
    void sortColors(vector<int>& nums) {
    // solving this problem using dutch flag algorithm 
    int n=nums.size();

    int low=0;
    int mid=0;
    int high=n-1;
    
    while(mid<=high){

        // we have to sort mid to high thats our task 
        if(nums[mid]==1)
        {
            mid++;
        }
        else if(nums[mid]==0)
        {
            swap(nums[mid],nums[low]);
            mid++;
            low++;

        }
        else {
            swap(nums[mid],nums[high]);
            high--;
            //here we dont do mid++ as mid can contain any of 0 1 and 2 
             }

    
    }
    }
};
