class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,maxi=0,mini=INT_MAX,index=0;
        for(i=0;i<prices.size();i++)
        {
            if(mini>prices[i])
            {
                mini=prices[i];
            }
        if(prices[i]-mini>maxi)
            maxi=prices[i]-mini;
        }
        return maxi;
    }
};