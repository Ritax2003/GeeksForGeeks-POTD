//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        for(int j=m-2;j>=0;j--){
            for(int i=0;i<n;i++){
                int side = M[i][j+1];
                int up_side = (i==0)?0:M[i-1][j+1];
                int down_side = (i==n-1)?0:M[i+1][j+1];
                M[i][j]=M[i][j]+max(side,max(up_side,down_side));
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans=max(ans,M[i][0]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends