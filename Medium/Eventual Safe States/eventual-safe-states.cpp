//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool dfs(int node,vector<int>adj[],vector<bool>&visited,vector<bool>&recst){
        visited[node] = true;
        recst[node] = true;
        for(auto it:adj[node]){
            if(!visited[it]){
                if(dfs(it,adj,visited,recst)){
                    return true;
                }
            }
            else if(recst[it]){
                return true;
            }
        }
        recst[node] = false;
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<bool>visited(V,false);
        vector<bool>recst(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,visited,recst);
            }
        }
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!recst[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends