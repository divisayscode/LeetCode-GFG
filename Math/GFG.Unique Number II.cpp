class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        int n=arr.size();
        vector<int>res;
        int ans=0;
        int a=0,b=0;
        int differentiating_bit=0;
        for(int i=0;i<n;i++)
        {
            ans^=arr[i];
        }
        differentiating_bit= ans&(-ans);
        for(int i=0;i<n;i++)
        {
            if(arr[i]&differentiating_bit)
            {
                a^=arr[i];
            }
            else
            {
                b^=arr[i];
            }
        }
        if(a>b) 
        {res.push_back(b);
        res.push_back(a);
        }
        else
        {
            res.push_back(a);
            res.push_back(b);
        }
        return res;
        
    }
};
