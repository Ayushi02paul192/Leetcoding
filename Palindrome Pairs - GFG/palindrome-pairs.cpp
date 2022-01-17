// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    // Function to check if a palindrome pair exists
    bool palindromepair(int N, string arr[]) {
        // code here
         if(N==1)return false;
        
        unordered_map<string,int> maap;
        for(int i = 0;i<N;i++)
        {
            maap[arr[i]]+=1;
        }
        for(int j = 0;j<N;j++)
        {
            string temp = arr[j];
            string hh = arr[j];
            reverse(hh.begin(),hh.end());
            bool turn = false;
            if(hh==temp)
            {
                if(maap[temp]>1)return true;
                
                else
                {
                    turn = true;
                }
                
            }
            int size = temp.length();
            string curr =  "";
            for(int i = 0 ; i<size;i++)
            {
                string n = curr;
                reverse(n.begin(),n.end());
                if(curr==n)
                {
                    string h = "";
                    for(int k = size-1;k>=i;k--)
                    {
                        h.push_back(temp[k]);
                       
                    }
                     if(maap[h]>=1)
                        {
                         
                         if(i==0)
                         {
                            if(!turn)return true;   
                         }
                        else
                        {
                              return true;
                        }
                            
                        }
                }
                curr.push_back(temp[i]);
            }
            
            curr =  "";
            for(int i = size-1 ; i>=0;i--)
            {
                string n = curr;
                reverse(n.begin(),n.end());
                if(curr==n)
                {
                    string h = "";
                    for(int k = i;k>=0;k--)
                    {
                        h.push_back(temp[k]);
                       
                    }
                     if(maap[h]>=1)
                        {
                            
                                  if(i==size-1)
                         {
                            if(!turn)return true;   
                         }
                        else
                        {
                              return true;
                        }
                        }
                        
                }
                curr.push_back(temp[i]);
            }
        }
       return false;
    }

};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends