// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    vector<int> TopK(vector<int>& array, int k)
    {
        // code here
        vector<int> v;
        priority_queue<pair<int,int>> q;
        unordered_map<int,int> mp;
        for(int i=0;i<array.size();i++){
            mp[array[i]]++;
        }
        for(auto it:mp){
            q.push({it.second,it.first});
        }
        while(k--){
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends