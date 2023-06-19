//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     static int matchGame(long n) {
        if (n % 5 == 0) {
            return -1;
        }
         int i = 1;
        while (i < 5) {
            long m = n - i;
            if (m % 5 == 0) {
                return (int) (n - m);
            }
            i++;
        }
         return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.matchGame(N) << endl;
    }
    return 0;
}
// } Driver Code Ends