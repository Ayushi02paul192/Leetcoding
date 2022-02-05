// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	  int i = A.length()-1, j = B.length()-1;
       
       int sum = 0;
       for(int i=0,j=0; i<A.length() || j<B.length(); i++,j++){
           if(i<A.length()) sum += A[i];
           if(j<B.length()) sum -= B[j];
       }
       
       if(sum != 0) return (-1);
       
       int cnt = 0;
       while(i >= 0 && j >= 0){
           if(A[i] == B[j]) i--,j--;
           else cnt++,i--;
       }
       
       return (cnt);
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends