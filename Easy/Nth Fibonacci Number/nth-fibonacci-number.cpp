//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod = 1e9+7;
    int nthFibonacci(int n){
        // code here
        int prev=0,cur=1,nxt;
        for(int i =0;i<n-1;i++){
            nxt = (prev+cur)%mod;
            prev = cur;
            cur = nxt;
        }
        return cur;
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends