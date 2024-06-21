class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        int zeros=0;
        int product=1;
        for(int i=0 ; i < n; i++)
        {
            if(nums[i]==0)
            {
                zeros++;
            }
            else
            {
                product *=nums[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(zeros > 1)
            {
                v.push_back(0);
            }
            else if(zeros==0)
            {
                v.push_back(product/nums[i]);
            }
            else
            {
                if(nums[i]!=0)
                {
                    v.push_back(0);
                }
                else
                {
                    v.push_back(product);
                }
            }
        }
         return v;
    }
};
