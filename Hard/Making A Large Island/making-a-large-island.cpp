//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    vector<vector<int>> visi;
    int n;
    public:
    
    bool vali(int i,int j)
    {
        if(i < 0 || j < 0 || i >= n || j >= n) return 0;
        return 1;
    }
    int f(vector<vector<int>>& grid, int i,int j, int id) 
    {
        if(vali(i, j) == 0) return 0;
        if(visi[i][j] || grid[i][j] == 0) return 0;
        visi[i][j] = id;
        int dx[] = {0, -1, 0, 1};
        int dy[] = {-1, 0, 1, 0};
        int x = 0;
        int y = 0;
        int ans = 1;
        for(int a = 0; a < 4; ++a) ans += f(grid, i+dx[a], j+dy[a], id);
        return ans;
    }
    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
       n = grid.size();
       int mx = 0;
       int ans = 0;
       visi = vector<vector<int>>(n, vector<int>(n, 0));
       int id = 1;
       map<int,int> id_size;
       for(int i = 0;  i < n ; ++i)
       {
           for(int j = 0; j < n; ++j)
           {
               if(grid[i][j] == 1 && visi[i][j] == 0)
               {
                   id_size[id] = f(grid, i, j, id);
                   mx = max(id_size[id], mx);
                   id++;
               }
           }
       }
        int dx[] = {0, -1, 0, 1};
        int dy[] = {-1, 0, 1, 0};

       for(int i = 0;  i < n ; ++i)
       {
           for(int j = 0; j < n; ++j)
           {
               if(grid[i][j] == 0)
               {
    
                   int x = 0;
                   int y = 0;
                   map<int, int> total_id;
                   for(int b = 0; b < 4; ++b)
                   {
                       x = i + dx[b];
                       y = j + dy[b];
                       if(vali(x, y))
                       {  
                           int id = visi[x][y];
                           total_id[id]++;
                       }
                   }
                   ans = 1;
                   for(auto it : total_id)
                   {   
                       int id = it.first;
                       ans += id_size[id];
                   }
                   mx = max(mx, ans);
               }
           }
       }
       return mx;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends