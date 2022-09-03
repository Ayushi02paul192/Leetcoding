class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans={nums[0]};
        for(int i=1;i<nums.size();i++)
        {
            ans.push_back(ans.back()+nums[i]);
        }
        return ans;
    }
};