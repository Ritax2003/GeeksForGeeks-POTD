//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
     int util(string &s1, string &s2, int m, int n, int dp[][1001])
    {
        if(dp[m][n] != -1)
            return dp[m][n];
        if(m==0 || n==0)
            dp[m][n] = 0;
        else
        {
            if(s1[m-1] == s2[n-1])
                dp[m][n] = 1 + util(s1,s2,m-1,n-1,dp);
            else
                dp[m][n] = max(util(s1,s2,m-1,n,dp), util(s1,s2,m,n-1,dp));
        }
        return dp[m][n];
    }
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        int dp[1001][1001];
        memset(dp,-1,sizeof(dp));
        return util(s1,s2,n,m,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends