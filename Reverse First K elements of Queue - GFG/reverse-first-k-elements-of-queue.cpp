// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    vector<int> V;
    while(q.size())
    {
        V.push_back(q.front());
        q.pop();
    }
    if(k==V.size())
    {

        reverse(V.begin(), V.end());

        for (int i = 0; i < V.size(); i++)

        {

            q.push(V[i]);

        }

    }

    else

    {

        vector<int> v;

        for (int j = 0; j < k; j++)

        {

            v.push_back(V[j]);

        }

        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)

        {

            q.push(v[i]);

        }

        for (int j = k; j < V.size(); j++)

        {

            q.push(V[j]);

        }

    }

    return q;
}