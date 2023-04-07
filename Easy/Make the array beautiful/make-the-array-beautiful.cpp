//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
      vector<int> makeBeautiful(vector<int> arr) {
        // code here
        int n=arr.size();
        stack<int>s;
        s.push(arr[0]);
        for(int i=1;i<n;i++)
        {
            if(!s.empty())
            {
           ;
                
                 if(s.top()*arr[i]>0)
                s.push(arr[i]);
                else if((s.top()==0 && arr[i]>=0) || (arr[i]==0 && s.top()>=0))
                s.push(arr[i]);
                else
                s.pop();
                
                
                
            }
            
            else
            s.push(arr[i]);
            
            
            
    
        }
        int m=s.size();
        int aq[m];
        for(int i=m-1;i>=0;i--)
        {
            aq[i]=s.top();
              s.pop();
              
        }
        vector<int>arrow;
        for(int i=0;i<m;i++)
        {
            arrow.push_back(aq[i]);
        }
        return arrow;
         }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends