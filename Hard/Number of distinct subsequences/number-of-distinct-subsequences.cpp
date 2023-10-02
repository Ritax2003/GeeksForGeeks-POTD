//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s){
	    int mod=1e9+7;
        int n=s.size();
        long long dp[n+1];
        s=" "+s;              //for making string 1 indexing 
        dp[0]=1;
        unordered_map<char,int> mp;
        for(int i=1;i<=n;i++){
            dp[i]=2*dp[i-1];
            if(mp.find(s[i])!=mp.end()){
                int idx=mp[s[i]];
                dp[i]=(dp[i]-dp[idx-1]+mod);      // for removing repeating                                                                    //   subsequences
            }
            mp[s[i]]=i;
            dp[i]%=mod;
        }
        return dp[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends