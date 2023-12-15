//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		void fib(int n,vector<int>&ans){
	    ans[0]=1;
	    ans[1]=1;
	    for(int i=2;i<n;i++){
	        ans[i]=(ans[i-1]%1000000007+ans[i-2]%1000000007)%1000000007;
	    }
	}
		int nthPoint(int n){
		    vector<int>ans(n);
		    fib(n,ans);
		    return (ans[n-1]+ans[n-2])%1000000007;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends