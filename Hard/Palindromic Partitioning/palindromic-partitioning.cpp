//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int palindromicPartition(string str)
    {
        // code here
         int n = str.length();
        
        // Create a 2D DP array to store whether substrings are palindromes
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));
        
        // Initialize the DP array for substrings of length 1
        for (int i = 0; i < n; i++) {
            isPalindrome[i][i] = true;
        }
        
        // Calculate palindromes for substrings of length 2 or more
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i < n - len + 1; i++) {
                int j = i + len - 1;
                
                if (len == 2) {
                    isPalindrome[i][j] = (str[i] == str[j]);
                } else {
                    isPalindrome[i][j] = (str[i] == str[j]) && isPalindrome[i + 1][j - 1];
                }
            }
        }
        
        // Create a DP array to store the minimum cuts needed
        vector<int> minCuts(n, 0);
        
        for (int i = 0; i < n; i++) {
            int minCut = i; // Initialize with the maximum possible cuts
            
            for (int j = 0; j <= i; j++) {
                if (isPalindrome[j][i]) {
                    if (j == 0) {
                        minCut = 0; // No cut needed for a palindrome substring
                    } else {
                        minCut = min(minCut, 1 + minCuts[j - 1]);
                    }
                }
            }
            
            minCuts[i] = minCut;
        }
        
        return minCuts[n - 1];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends