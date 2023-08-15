//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    int mod = 1e9 +7;
    int findCatalan(int n) 
    {
        vector<long long int> dp(n+1);
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = 0;
            for(int j = 0; j < i; j++){
                dp[i] = (dp[i] + dp[j] * dp[i-j-1])%mod;
            }
        }
      return dp[n];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends