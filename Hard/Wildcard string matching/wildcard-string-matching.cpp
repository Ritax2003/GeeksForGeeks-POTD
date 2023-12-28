//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
   int solve(string &wild, string &pattern, int i, int j, vector<vector<int>> &dp)
    {
        if(i < 0 && j < 0)
            return 1;
        if(i < 0 || j < 0)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(wild[i] == pattern[j])
            return dp[i][j] = solve(wild, pattern, i - 1, j - 1, dp);
        if(wild[i] == '?')
            return dp[i][j] = solve(wild, pattern, i - 1, j - 1, dp);
        if(wild[i] == '*')
            return dp[i][j] = (solve(wild, pattern, i - 1, j - 1, dp) || solve(wild, pattern, i, j - 1, dp) || solve(wild, pattern, i - 1, j, dp));
        return dp[i][j] = 0;
    }
    bool match(string wild, string pattern)
    {
        vector<vector<int>> dp(wild.size(), vector<int>(pattern.size(), -1));
        return solve(wild, pattern, wild.size() - 1, pattern.size() - 1, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends