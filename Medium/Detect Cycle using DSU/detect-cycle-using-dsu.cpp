//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
     public:
    //Function to detect cycle using DSU in an undirected graph.
    
    int findPar(vector<int>& parent,int node){
        if(parent[node] == node) return node;
        
        return parent[node] = findPar(parent,parent[node]);
    }
    
    bool unionSet(int i,int j,vector<int>& parent){
        int u = findPar(parent,i);
        int v = findPar(parent,j);
        
        if(u != v){
            parent[u] = v;
            return false;
        }
        
        return true;
    }
    
int detectCycle(int V, vector<int>adj[])
{
    // Code here
    vector<int> parent(V);
    for(int i=0;i<V;i++){
        parent[i] = i;
    }
    
    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();j++){
            //i<adj[i][j] to handle case for 1->2 and 2->1 not considre as cycle
            if(i<adj[i][j] && unionSet(i,adj[i][j],parent)){
                return 1;
            }
        }
    }
    
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
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends