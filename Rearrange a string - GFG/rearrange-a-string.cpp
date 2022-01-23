// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
         int cache[26]={0};int sum =0;
      for(auto &c:str)
      {
          if(isdigit(c))
               sum+=c-'0';
          else
               cache[c-'A']+=1;
      }
     
      string ans;
      for(int i=0;i<26;i++)
      {
          for(int j=0;j<cache[i];j++)
          {
              ans+=i+'A';
          }
      }
      ans+=to_string(sum);
      return ans;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends