class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int n=nums.size(),s=0;
        //int p=nums[n-1];
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
         return  n*(n+1)/2-s;  
    }
};