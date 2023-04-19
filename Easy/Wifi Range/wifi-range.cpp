//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
    // Convert the input string S to a character array wifiCoverage
    char wifiCoverage[N];
    strcpy(wifiCoverage, S.c_str());
    
    // Loop through the wifiCoverage array
    for (int i = 0; i < N; i++) {
        // If there is a wifi in the ith room
        if (S[i] == '1') {
            // Loop through the range of rooms covered by the wifi
            for (int j = i - X; j <= i + X; j++) {
                // Mark all the corresponding rooms in the wifiCoverage array
                if (j >= 0 && j < N) {
                    wifiCoverage[j] = '1';
                }
            }
        }
    }
    
    // Loop through the wifiCoverage array
    for (int i = 0; i < N; i++) {
        // If there is a room that is not covered by any wifi, return false
        if (wifiCoverage[i] == '0') {
            return false;
        }
    }
    
    // If all rooms are covered by a wifi, return true
    return true;

    }
        /*
        2nd soln
        bool wifiRange(int N, string S, int X){
        string a=S;
        for(int i=0;i<N;i++){
            if(S[i]=='1'){
                for(int j=i-X;j<=i+X;j++){
                    if(j>=0 && j<N){
                        a[j]=1;
                    }
                }
            }
        }
        for(int i=0;i<N;i++){
            if(a[i]=='0'){
                return false;
            }
        }
        return true;

    }*/
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