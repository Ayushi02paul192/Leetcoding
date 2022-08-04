class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX,maxi=INT_MIN,ind,profit,ogprof=0;
        for(int i=0;i<prices.size();i++)
        {
            if(mini>prices[i])
            {
                mini=prices[i];
               
            }
            profit=prices[i]-mini;
            if(ogprof<profit)
                ogprof=profit;
        }
        return ogprof;
       
    }
};