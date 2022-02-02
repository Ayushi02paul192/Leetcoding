// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(!N || N&(N-1)) return -1;
       int l=1, r=30;
       while(l<=r){
           int m = (l+r)/2;
           int x = 1<<(m-1);
           if(x<N)l=m+1;
           else if(x>N)r=m-1;
           else return m;
       }
       return r;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends