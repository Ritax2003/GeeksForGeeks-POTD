//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        int i =0,j=0, count[3] = {0};
        int ans = INT_MAX;
        while(j<S.size()){
            count[S[j] - '0']++;
            while(count[0]>=1 && count[1]>=1 && count[2]>=1){
                int len = j-i+1;
                ans = min(ans,len);
                count[S[i]-'0']--;
                i++;
            }
            j++;
        }
        return (ans == INT_MAX)? -1:ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends