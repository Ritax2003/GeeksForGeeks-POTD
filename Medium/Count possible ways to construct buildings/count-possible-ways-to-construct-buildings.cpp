//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
vector<int>dp;
    int mod = 1e9 + 7;
    
    int solve(int i)
    {
        if(i <= 0) return 1;
        if(dp[i] != -1) return dp[i];
        return dp[i] = (solve(i-1) + solve(i-2))%mod;
    }
    
    
    int TotalWays(int n)
    {
        dp.resize(n+1, -1);
        
        int ans = solve(n);
        return (ans*1ll*ans)%mod;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends