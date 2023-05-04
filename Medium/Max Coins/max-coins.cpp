//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      int maxCoins(int n,vector<vector<int>> &ranges){
        sort(ranges.begin(), ranges.end(), [](vector<int>& r1, vector<int>& r2) {
            if(r1[1] != r2[1]) return r1[1] < r2[1];
            return r1[0] < r2[0]; // Because {11, 17} should be considered before {17, 17}
        });

        vector<pair<int, int>> v; // {end, coins}
        int ans = 0;
        for(auto& r : ranges) {
            ans = max(ans, le(v, r[0]) + r[2]);
            // Only push this range if it is better than all the possible coins in the left
            if(v.empty() || v.back().second < r[2]) v.push_back({r[1], r[2]});
        }
        return ans;
    }
    
    // Returns the maximum coins which can be collected such that the range's end_i <= t
    int le(vector<pair<int, int>>& v, int t) {
        int lo = 0, hi = v.size()-1, idx = -1;
        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;
            if(v[mid].first <= t) {
                idx = mid;
                lo = mid+1;
            } else hi = mid-1;
        }
        return idx == -1 ? 0 : v[idx].second;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        Solution ob;
        cout<<ob.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends