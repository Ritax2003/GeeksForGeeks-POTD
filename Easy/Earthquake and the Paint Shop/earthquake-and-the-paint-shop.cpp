//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    static bool cmp(struct alphanumeric &a,struct alphanumeric &b){
        if(a.name == b.name)
         return a.count<b.count;
        return a.name <  b.name;
    }
    vector<alphanumeric> sortedStrings(int n, vector<string> a) {
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++)
         mp[a[i]]++;
        vector<alphanumeric> ans;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            alphanumeric s;
            s.name=it->first;
            s.count=it->second;
            ans.push_back(s);
        }
        sort(ans.begin(),ans.end(),cmp);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        cin.ignore();
        vector<string> v;
        for (int i = 0; i < N; i++) {
            string s;
            getline(cin, s);
            v.push_back(s);
        }
        Solution ob;
        vector<alphanumeric> ans = ob.sortedStrings(N, v);
        for (auto u : ans) cout << u.name << " " << u.count << "\n";
    }
}
// } Driver Code Ends