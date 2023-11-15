//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    int numberofsubsequences(string str){
        int n = str.length();
        
        // int mod = 1000000007;
        
        vector<int> dp(n+1);
        
        unordered_map<char,int> mp;
        
        dp[0]=1;
        
        for(int i=1;i<=n;i++){
            
           dp[i]=(2*dp[i-1]);
           
           char ch = str[i-1];
           
           if(mp.find(ch)!=mp.end()){
               
               int ind = mp[ch];
               
               dp[i]=(dp[i]-dp[ind-1]);
               
           }
           mp[ch]=i;
        }
        return dp[n];
    }
    
    
    string betterString(string str1, string str2) {
        // code here
        
        int  a = numberofsubsequences(str1);
        int  b = numberofsubsequences(str2);
        
        if(a==b) return str1;
        
        if(a>b) 
        return str1;
        else 
        return str2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends