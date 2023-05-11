//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        // code here
        int ans=0,n=s.size();
        
        /* the loop to make half the string ideal palindrome if possible */
        for(int i=0;i<n/2;i++){
                if (s[i] =='?' && s[n-1-i]!='?'){
                    s[i]=s[n-1-i];
                }else if(s[i]!=s[n-1-i] && s[i]!='?' && s[n-1-i]!='?'){
                    return -1;
                }
        }
        /* the loop to make half the string ideal palindrome if possible */

        
        /* the loop to get the minimum sum of difference
        of ascii values for half the modified palindromic string */
        char prevChar='.';
        for(int i=0;i<n/2;i++){
            if(s[i]!='?'){
                if(prevChar=='.'){
                    prevChar=s[i];
                }else if(s[i]!=prevChar){
                    ans+=abs(s[i]-prevChar);
                }
                prevChar=s[i];
            }
        }
        /* the loop to get the minimum sum of difference
        of ascii values for half the modified palindromic string */

        return ans*2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends