//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
       // We can solve it by using BFS
        int ans=0;
        vector<vector<int>>vis(N,vector<int>(M,-1));
        queue<pair<int,pair<int,int>>> q;
        vis[0][0]=1;
        q.push({0,{0,0}});
        
        vector<int>delR={-1,0,1,0};
        vector<int>delC={0,1,0,-1};
        while(!q.empty())
        {
            int dist=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;
            if(row==X&&col==Y)
            {
                return dist;
            }
            q.pop();
            for(int i=0;i<4;i++)
            {
               int nrow=row+delR[i];
               int ncol=col+delC[i];
               if(nrow>=0&&nrow<N&&ncol>=0&&ncol<M&&A[nrow][ncol]==1&&vis[nrow][ncol]==-1)
               {
                   vis[nrow][ncol]=1;
                   
                   q.push({dist+1,{nrow,ncol,}});
               }
            }
        }
        
        return -1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends