//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
    public:
   const int MOD=1e9+7;
    
    long long modInverse(int a, int m) {
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;

    if (m == 1) return 0;

    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0) x1 += m0;

    return x1;
}


    long long  numberOfPaths(int m, int n)
    {   if(m==1||n==1)
            return 1;
       long long ans = 1;
        for (int i = m + n - 2, j = 1; i >= max(m, n); i--, j++) {
        ans = (ans * i) % MOD;
        ans = (ans * modInverse(j, MOD)) % MOD;
    }

    return ans;
    }
};


//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends