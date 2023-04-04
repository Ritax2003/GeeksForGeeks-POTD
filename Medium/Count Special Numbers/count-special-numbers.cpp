//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        // Code here
        map<int,int>mp;
        for(int i=0;i<n;++i){
            mp[arr[i]]++;
        }
        
        auto isSpecial= [&](int x)->auto{
            
            for(int i=2;i*i<=x;++i){
                if(x%i==0){
                    if(mp[i] or mp[x/i])
                        return true;
                }
            }  
            return false;
        };
        
        
        int ans=0;
        for(int i=0;i<n;++i){
            if(isSpecial(arr[i]) or mp[arr[i]]>1){
                ++ans;
            }
        }
        if(mp[1])
            ans=n-(mp[1]==1);
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
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends