//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i = 0 ; i <n;i++){
            if(grid[i][0]){
                vis[i][0] = 1;
                q.push({i,0});
            }
            if(grid[i][m-1]){
                vis[i][m-1] = 1;
                q.push({i,m-1});
            }
        }
        for(int j = 0 ; j < m;j++){
            if(grid[0][j]){
                vis[0][j] = 1;
                q.push({0,j});
            }
            if(grid[n-1][j]){
                vis[n-1][j] = 1;
                q.push({n-1,j});
            }
        }
        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i = 0 ; i < 4 ;i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc]){
                    q.push({nr,nc});
                    vis[nr][nc] = 1;
                }
            }
            
        }
            int cnt = 0;
            for(int i = 0;  i<n ; i++){
                for(int j = 0 ; j<m;j++){
                    if(grid[i][j] && !vis[i][j]) cnt++;
                }
            }
            return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends