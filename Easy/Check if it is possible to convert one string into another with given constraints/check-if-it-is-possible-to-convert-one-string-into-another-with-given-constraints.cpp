//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        if(M != N)  return 0;
        string s = "";
        string t = "";
        map<char, int> one, two;
        for(int i = 0;i<M;i++)
        {
            one[S[i]]++;
            two[T[i]]++;
            if(one['A'] > two['A']) return 0;
            if(one['B'] < two['B']) return 0;
        }
        for(int i = 0;i<M;i++)
        {
            if(S[i] != '#')
                s.push_back(S[i]);
        }
        for(int i = 0;i<N;i++)
        {
            if(T[i] != '#')
                t.push_back(T[i]);
        }
        return s == t;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends