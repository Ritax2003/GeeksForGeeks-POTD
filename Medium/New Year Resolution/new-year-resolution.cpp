//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    bool f(int ind,int sum,int coins[],vector<vector<int>>&dp,int n) {
        
        if(ind == n) {
            
            if((sum % 20 == 0 || sum % 24 == 0 || sum == 2024) && sum != 0) {
                
                return true;
                
            }
            
            return false;
            
        }
        
        if(dp[ind][sum] != -1) return dp[ind][sum];
        
        int not_take = f(ind+1,sum,coins,dp,n);
        
        int take = f(ind+1,coins[ind] + sum,coins,dp,n);
        
        return dp[ind][sum] = (not_take || take);
        
    }
    
    int isPossible(int N , int coins[]) 
    {
        
       vector<vector<int>>dp(N+1,vector<int>(2024,-1));
       
       return f(0,0,coins,dp,N);
       
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends