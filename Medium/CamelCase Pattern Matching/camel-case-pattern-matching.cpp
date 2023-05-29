//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  // Function to check if a word matches the given pattern
bool isMatchingPattern(string word, string pattern) {
    //iterators to ensure the word and pattern must be in their range.
    int i = 0, j = 0;
    while (i < word.length() && j < pattern.length()) {
        //check for uppercase
        if (isupper(word[i])) {
            //check if its uppercase and matches the pattern or not
            if (word[i] != pattern[j])
                return false;
            j++;
        }
        i++;
    }
    // returns true if j is equal to pattern length
    return j == pattern.length();
}
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
     vector<string> result;
    
    for (string word : Dictionary) {
        // Check if the current word matches the pattern
        if (isMatchingPattern(word, Pattern))
            result.push_back(word);
    }
    
    // If no matches are found, add "-1" to the result vector
    if (result.empty())
        result.push_back("-1");
    
    // Sort the result vector in lexicographical order
    sort(result.begin(), result.end());
    
    return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends