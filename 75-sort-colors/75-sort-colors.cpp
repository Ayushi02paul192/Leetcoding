class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                int t=nums[j];
                   nums[j]=nums[j+1];
                    nums[j+1]=t;
                }
            }
        }
        
    }
};