class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int sum=0,ans=nums[0],i=0;
        while(i<nums.size())
        {
            sum+=nums[i];
            if(sum>ans)
                ans=max(sum,ans);
            if(sum<0)
                sum=0;
            i++;
        }
        return ans;
    }
};