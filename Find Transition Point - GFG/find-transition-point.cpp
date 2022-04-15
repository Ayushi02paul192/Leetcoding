// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
     int s=0;
   int e=n-1;
   int mid=0;
   int ans=-1;
   while(s<=e){
         mid=s+(e-s)/2;
       if(arr[mid]==1){
           ans = mid;
           e=mid-1;
       }
       else if(arr[mid]!=1){
           s=mid+1;
       }
     //binary search
   }
   return ans;
}