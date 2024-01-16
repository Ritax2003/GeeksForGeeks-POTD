//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        solve(arr,0,n,st);
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
    void solve(vector<int>&a,int idx, int n,set<vector<int>>&st){
        if(idx==n){
            st.insert(a);return;
        }
        for(int i=idx;i<n;i++){
            swap(a[i],a[idx]);
            solve(a,idx+1,n,st);
            swap(a[i],a[idx]);
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends