//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
         long ans = 0;
        
        for(int i=1; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                if(i==n/i) ans += i; //n is a perfect square, so add that factor once.
                else ans += i + n/i; //Add both factors as they are different.
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n ;
        Solution ob;
        cout<<ob.maxSumLCM(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends