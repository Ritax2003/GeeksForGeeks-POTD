//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    void dfs(vector<vector<int>>&grid,int r,int c){
        if(r<0||r==grid.size()||c<0||c==grid[0].size()||grid[r][c]==0) return;
        
        grid[r][c]=0;
        
        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        dfs(grid, r, c + 1);
        dfs(grid, r, c - 1);
    }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        int k =0 ;
        for(int r=0;r<matrix.size();r++){
            for(int c=0;c<matrix[0].size();c++){
                if(r==0||r==N-1||c==0||c==M-1){
                    dfs(matrix,r,c);
                }
            }
        }
        
        for(int r=0;r<N;r++){
            for(int c=0;c<M;c++){
                if(matrix[r][c]==1) k++;
                dfs(matrix,r,c);
            }
        }
        return k;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends