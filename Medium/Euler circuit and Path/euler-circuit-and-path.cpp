//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int isEulerCircuit(int V, vector<int>adj[]){
	    int cnt = 0;

// Loop through all vertices
for (int i = 0; i < V; i++) {
    // Check if the degree of the current vertex is even
    if (adj[i].size() % 2 == 0) {
        cnt++;
    }
}

// If all vertices have even degree, return 2 (Eulerian Circuit)
if (cnt == V) {
    return 2;
}

// If exactly two vertices have odd degree, return 1 (Eulerian Path)
if (cnt == V - 2) {
    return 1;
}

// If the above conditions are not met, return 0 (None of the above)
return 0;
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
		int ans = obj.isEulerCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends