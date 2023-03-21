//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    void rp(string s, int x, int y, long long& ans, bool flag) {
    // Create an empty str to keep track of the characters that have not been processed yet
    string str;
    // Iterate through each character in the string
    for (char c : s) {
        // If the character is a 'p'
        if (c == 'p') {
            // Check if there is an 'r' on top of the str
            if (!str.empty() && str.back() == 'r') {
                // If there is, remove the 'r' from the str and add y to the answer
                ans += y;
                str.pop_back();
            } else {
                // Otherwise, add the 'p' to the str
                str.push_back(c);
            }
        } else {
            // If the character is not a 'p', add it to the str
            str.push_back(c);
        }
    }
    // If the flag is true, call the other function to process the remaining characters
    if (flag) {
        pr(str, x, y, ans, false);
    }
}

void pr(string s, int x, int y, long long& ans, bool flag) {
    // Create an empty str to keep track of the characters that have not been processed yet
    string str;
    // Iterate through each character in the string
    for (char c : s) {
        // If the character is an 'r'
        if (c == 'r') {
            // Check if there is a 'p' on top of the str
            if (!str.empty() && str.back() == 'p') {
                // If there is, remove the 'p' from the str and add x to the answer
                ans += x;
                str.pop_back();
            } else {
                // Otherwise, add the 'r' to the str
                str.push_back(c);
            }
        } else {
            // If the character is not an 'r', add it to the str
            str.push_back(c);
        }
    }
    // If the flag is true, call the other function to process the remaining characters
    if (flag) {
        rp(str, x, y, ans, false);
    }
}

long long solve(int x, int y, string s) {
    long long ans = 0;
    // Call the appropriate function depending on the value of x and y
    if (x > y) {
        pr(s, x, y, ans, true);
    } else {
        rp(s, x, y, ans, true);
    }
    return ans;
}
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends