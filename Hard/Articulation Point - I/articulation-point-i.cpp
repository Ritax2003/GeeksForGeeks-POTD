//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
public:
    void APUtil(vector<int> adj[], int u, bool visited[],int disc[], int low[], int &time, int parent, bool isAP[]){
       int children = 0; // Count of children in DFS Tree
        visited[u] = true;// Mark the current node as visited
        disc[u] = low[u] = ++time; // Initialize discovery time and low value
        for (auto v : adj[u]){// Go through all vertices aadjacent to this
            // If v is not visited yet, then make it a child of u
            // in DFS tree and recur for it
            if (!visited[v]){
                children++;
                APUtil(adj, v, visited, disc, low, time, u, isAP);
                // Check if the subtree rooted with v has
                // a connection to one of the ancestors of u
                low[u]  = min(low[u], low[v]);
                // If u is not root and low value of one of
                // its child is more than discovery value of u.
                if (parent != -1 && low[v] >= disc[u])
                    isAP[u] = true;
            }// Update low value of u for parent function calls.
            else if (v != parent)
                low[u]  = min(low[u], disc[v]);
        }// If u is root of DFS tree and has two or more chilren.
        if (parent == -1 && children > 1)
            isAP[u] = true;
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        vector<int> ans;  // vector to store the articulatipon points
        int disc[V] = {0};
        int low[V];
        bool visited[V] = {false};
        bool isAP[V] = {false};
        int time = 0, par = -1;
        APUtil(adj, 0, visited, disc, low,
               time, par, isAP);
        for (int u = 0; u < V; u++) // Printing the APs
            if (isAP[u] == true)
                ans.push_back(u);
        //  for(int i=0; i<N; i++) {
        //      if(arti[i])     // if ith node is an articulation point
        //          ans.push_back(i);
        //  }

        if (ans.size() == 0)
            ans.push_back(-1);

        return ans;
    }
};

//{ Driver Code Starts.

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends