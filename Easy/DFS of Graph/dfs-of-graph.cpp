//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

bool vis[10005];
vector<int>ans;
void dfs(int v,vector<int>adj[]){
    vis[v]=1;
    ans.push_back(v);
    for(auto u:adj[v]){
        if(!vis[u]){
            dfs(u,adj);
        }
    }
}
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        memset(vis,0,sizeof(vis));
        ans.clear();
        dfs(0,adj);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends