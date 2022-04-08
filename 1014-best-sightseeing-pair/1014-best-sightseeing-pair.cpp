class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int result=0;
        int maxi=values[0]+0;
        for(int i=1;i<values.size();i++)
        {
            maxi=max(maxi,values[i-1]+i-1);
            result=max(result,values[i]-i+maxi);
        }
        return result;
    }
};