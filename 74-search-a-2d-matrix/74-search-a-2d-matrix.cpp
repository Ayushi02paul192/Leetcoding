class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]<=target && matrix[i][n-1]>=target)
            {
                vector<int> arr=matrix[i];
                int low=0, high=n-1,mid;
                while(low<=high)
                {
                    mid=low+(high-low)/2;
                    if(arr[mid]==target)
                    {
                        return true;
                    }
                    else if(arr[mid]>target)
                        high=mid-1;
                    else
                        low=mid+1;
                }
            }
        }
        return false;
    }
};