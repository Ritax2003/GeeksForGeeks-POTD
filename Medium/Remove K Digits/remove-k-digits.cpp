//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
           if(K >= S.length() || K == 0)return "0";

        string ans = "";
        
        for(int i=0; i<S.length(); i++){
            while(!ans.empty() && ans.back() > S[i] && K > 0){
                
                    ans.pop_back();
                    K--;
                
            }
            
            if(!ans.empty() || S[i] !='0'){
                
                ans.push_back(S[i]);
            }
            
        }
        
        while(K>0 && !ans.empty()){
            ans.pop_back();
            K--;
        }
        
        return ans.empty() ? "0" : ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends