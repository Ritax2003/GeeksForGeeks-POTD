//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
 public:
    long substrCount(string S, int K) {
        // Call the atmost function to count substrings with at most K distinct characters
        //long atMostK = atMost(S, K);

        // Call the atmost function again with K-1 to count substrings with at most K-1 distinct characters
        //long atMostKMinus1 = atMost(S, K - 1);

        // Calculate and return the result
        //return atMostK - atMostKMinus1;
        return atMost(S, K) - atMost(S, K - 1);
    }

private:
    long atMost(string s, int k) {
        vector<int> charCount(26, 0);  // Initialize an array to store character counts
        int distinctCount = 0;        // Initialize the distinct character count
        int left = 0;                 // Initialize the left pointer for the sliding window
        long res = 0;                 // Initialize the result

        for (int i = 0; i < s.length(); i++) {
            char currentChar = s[i];
            int charIndex = currentChar - 'a';

            // Update the character count and distinct count
            charCount[charIndex]++;
            if (charCount[charIndex] == 1) {
                distinctCount++;
            }

            // Slide the window to the right while maintaining at most K distinct characters
            while (distinctCount > k) {
                int leftCharIndex = s[left] - 'a';
                charCount[leftCharIndex]--;

                if (charCount[leftCharIndex] == 0) {
                    distinctCount--;
                }

                left++;
            }

            // Update the result by adding the count of substrings in the current window
            res += (i - left + 1);
        }

        return res;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends