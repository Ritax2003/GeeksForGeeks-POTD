//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
   private:
    void dfs(vector<int> &vis,vector<int> adj[],int node, set<int> &st)
    {
        vis[node]=1;
        st.insert(node);
        for(auto it : adj[node])
        {
            if(st.find(it)==st.end())
            dfs(vis,adj,it,st);
        }
    }
    public:
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int> vis(V,0);
	    //set<int> st;
	    for(int i=0;i<V;i++)
	    {
	        set<int> st;
	        if(!vis[i])
	        dfs(vis,adj,i,st);
	        if(st.size()==V)
	        return i;
	    }
	    return -1;
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
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends