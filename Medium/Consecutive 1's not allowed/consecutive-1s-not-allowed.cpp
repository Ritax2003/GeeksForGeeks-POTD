//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    ll a = 2;
	    ll b = 3;
	    ll c = a+b;
	    int mod = 1e9+7;
	    if (n == 1) {
	        return a;
	    } else if (n == 2) {
	        return b;
	    } else {
	        for (int i = 3;i<n;i++) {
	            a=b;
	            b=c;
	            c=(a+b)%mod;
	            
	        }
	        return c;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends