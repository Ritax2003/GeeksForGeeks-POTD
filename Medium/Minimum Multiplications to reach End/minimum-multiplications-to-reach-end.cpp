//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        const int MOD = 100000;
        vector<int> visited(MOD, 0); // Initialize visited vector with 0s
        queue<pair<int, int>> q; // Store (current number, steps) pairs
    
        q.push({start, 0});
        visited[start] = 1; // Mark start as visited
    
        while (!q.empty()) {
            int currentNum = q.front().first;
            int steps = q.front().second;
            q.pop();
    
            if (currentNum == end) {
                return steps;
            }
    
            // Try all possible multiplications
            for (int factor : arr) {
                int nextNum = (currentNum * factor) % MOD;
    
                if (!visited[nextNum]) {
                    q.push({nextNum, steps + 1});
                    visited[nextNum] = 1; // Mark nextNum as visited
                }
            }
        }
        return -1; // If end cannot be reached
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends