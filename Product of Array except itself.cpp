class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,1);
        vector<int>right(n,1);
        vector<int>ans(n);
        //left products
        for(auto i=1;i<n;i++)
        {
               left[i]=left[i-1]*nums[i-1];
        }
        //right product
        for(auto i=n-2;i>=0;i--)
        {
               right[i]=right[i+1]*nums[i+1];
        }
        //result in O(n)
        for(auto i=0;i<n;i++)
        {
               ans[i]=left[i]*right[i];
        }
        return ans;
    }
};
