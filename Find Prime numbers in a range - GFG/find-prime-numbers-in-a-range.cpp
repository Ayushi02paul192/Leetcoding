// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> v;
        for(int i=max(M, 2);i<=N;i++){
            int flag=0;
            for(int j=2;j*j<=i;j++){
                if(i%j == 0){
                    flag=1;
                    break;
                }
            }
            if(flag == 0){
                v.push_back(i);
            }
        }
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends