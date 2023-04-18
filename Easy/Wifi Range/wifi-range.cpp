//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
     bool wifiRange(int n, string s, int x){
        // code here
        int t=0;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                if(x >= abs(t)) t = x;
                else return 0;
            }
            else
            {
                t--;
            }
        }
        if(t<0) return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends