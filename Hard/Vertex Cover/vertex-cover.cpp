//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int vertexCover(int n, vector<pair<int, int>> &edges) {
                int ans=n;
                for(int mask=0;mask<(1<<n);mask++){
                    bool ok=true;
                    for(auto &it:edges){
                        int u=it.first,v=it.second;
                        u--;v--;
                        if(!(mask&(1<<u)) and !(mask&(1<<v))){
                            ok=false;break;
                        }
                    }
                    if(ok)ans=min(ans,__builtin_popcount(mask));
                }
                return ans;
            }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> edges;
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            edges.push_back({a,b});
        }
        Solution s;
        cout<<s.vertexCover(n,edges)<<endl;
    }
    return 0;
}
// } Driver Code Ends