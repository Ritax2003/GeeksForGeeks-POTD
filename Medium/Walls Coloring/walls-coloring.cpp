//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
         vector<int> a(N),b(N),c(N);
        a[0] = colors[0][0];
        b[0] = colors[0][1];
        c[0] = colors[0][2];
        for(int i= 1;i<N;i++){
            a[i] = colors[i][0]+min(b[i-1],c[i-1]);
            b[i] = colors[i][1]+min(a[i-1],c[i-1]);
            c[i] = colors[i][2]+min(b[i-1],a[i-1]);
        }
        return min({a[N-1],b[N-1],c[N-1]});
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends