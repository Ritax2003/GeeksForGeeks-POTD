//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
            /* The logic here is : 
           we are countinf the lines that have started at a point before 
           that particular point and still did not end. 
           Means mp[startpoint]++ makes the lines started at startpoint =1 
           and as the line ends at endpoint we should make it as 0 so we are
           doing mp[endpoint]--, so by calculating sum we get 1 in between points 
           ans 0 before or after.
           So we need to find a point in between where the sum is maximum */
        map<int, int> mp;
        for(int i=0; i<N; i++){
            mp[lines[i][0]]++;
            mp[lines[i][1]+1]--;
        }
        int ans = 0, sum = 0;
        for(auto it : mp){
            sum += it.second;
            ans = max(ans, sum);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends