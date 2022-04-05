class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN, i=0, j=0,sum=0;
        while(i<=j && j<nums.size())
        {
            sum=sum+nums[j];
            if(sum<0)
            {
                 ans=max(sum,ans);
                sum=0;
                i++;j=i;
            }
            else
            {
                ans=max(sum,ans);
                j++;
            }   
        }
        return ans;
    }
};