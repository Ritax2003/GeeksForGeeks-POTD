//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int mod = 1e9+7;
    long long countWays(int n, int k){
         long long ans=1;
        long long prev=1;
        for(int i=1;i<n;i++){
            long long temp=(k-1)*ans;
            ans=(prev+temp)%mod;
            prev=temp;
        }
        return (ans*k)%mod;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends