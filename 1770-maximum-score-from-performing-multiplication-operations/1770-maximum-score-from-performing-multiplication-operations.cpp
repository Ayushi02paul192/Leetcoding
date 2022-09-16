class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int m = multipliers.size();
    int n = nums.size();
    int dp[m][m+1];  //dp [index of multipliers][starting point of nums after removing]: max sum of i th operation with starting point j after removing.
                     // see below for the reason no need to build a 3D dp with ending point.
                    
    // reason that dp stored max sum: use example 2 here with initial indices 0,1,2,3,4,5
    // if dp just stored the sum then,
    // dp[0][0]=m[0]*num[5];  
    // dp[0][1]=m[0]*num[0];
    //--------------------------------
    // dp[1][0]=m[1]*num[4]+dp[0][0];
    // dp[1][1]=m[1]*num[0]+dp[0][0];
    // dp[1][1]=m[1]*num[5]+dp[0][1];
    // dp[1][2]=m[1]*num[1]+dp[0][1];
    // ....
    // note that the time complexity would go like 2^m, we observed that dp[1][1] appears twice, we can simply store its maximum in dp[1][1];
    // then our iteration is like
    // dp[0][0]
    // dp[0][1]
    //-----------
    // dp[1][0]
    // dp[1][1]
    // dp[1][2];
    //----------
    // dp[2][0];
    // dp[2][1];
    // dp[2][2];
    // dp[2][3];
    // ..  time complexity is m^2/2
    for(int i=0;i<m;i++){
        for(int j=0;j<m+1;j++){
            dp[i][j]=INT_MIN;  // initialization
        }
    }
    
    dp[0][0]=  multipliers[0]*nums[n-1];
    dp[0][1]=  multipliers[0]*nums[1-1];
  //    cout << dp[0][0] << dp[0][1] <<endl;
    for(int i=0;i<m-1;i++){
        for(int j=0;j<=i+1;j++){
             
            dp[i+1][j+1]= max(dp[i+1][j+1],multipliers[i+1]*nums[j]+dp[i][j]); // starting point is changed from j to j+1  which means we remove the j th point
            dp[i+1][j]= max(dp[i+1][j],multipliers[i+1]*nums[j+n-2-i]+dp[i][j]);     //  starting point is still j which means we remove the last point
            
            // difference of index (=n-2-i) between starting point j and last point (j+n-2-i) is always fixed for ith operation.
            // so the time complexity is ~o(m^2) which is fine for m<=1000.
        }
        
    }
    
    int maxVal=INT_MIN;
    
    for(int i=0;i<m+1;i++){
        maxVal=max(dp[m-1][i],maxVal);
    }
    
  //     cout << dp[0][0]<<" " << dp[0][1] <<endl;
    return maxVal;
    
    }
};