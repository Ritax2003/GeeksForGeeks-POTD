//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int n,int m, vector<vector<int>>& edges){
        vector<int> dist(n,INT_MAX);
        dist[0]=0;
        
        for(int i =0;i<m-1;i++){
            for(const auto &edge:edges){
                int src = edge[0];
                int dest = edge[1];
                int weight = edge[2];
                if(dist[src]!=INT_MAX && dist[src]+weight <dist[dest]){
                    dist[dest]= dist[src]+weight;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(dist[i]==INT_MAX) {
                dist[i] = -1;
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends