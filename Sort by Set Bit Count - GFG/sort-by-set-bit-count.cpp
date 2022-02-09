// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
   int count(int n){
        int c=0;
        while(n){
            n&=(n-1);
            c++;
        }
        return c;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        multimap<int,int,greater<int>>mp;
        for(int i=0;i<n;i++){
            mp.insert({count(arr[i]),arr[i]});
        }
        int i=0;
        auto it=mp.begin();
        while(it!=mp.end()){
            arr[i++]=it->second;
            it++;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends