//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        // code here
        vector<int>V;
        while(n!=0){
            V.push_back(n%2);
            n/=2;
        }
        int c=0;
        int ans=0;
        for(int i = V.size()-1;i>=0;i--){
            if(V[i]){
                c++;
                if(c==3){
                    c=0;
                }
                else ans+=pow(2,i);
            }
            else c=0;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends