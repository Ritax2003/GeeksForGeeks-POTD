//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        vector<vector<int>> ans(n,vector<int> (m,0));
        vector<vector<int>> vis(n,vector<int> (m,0));
        
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j]=='W'){
                    q.push({i,j});
                }
            }
        }
        int dis=1;
        int dr[] = {0,0,1,-1};
        int dc[] = {1,-1,0,0};

        while(!q.empty()){
            int size=q.size();
            while(size--){
                pair<int,int> temp=q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int nr = temp.first+dr[k];
                    int nc = temp.second+dc[k];
                    
                    if(nr>=0 && nc>=0 && nr<n && nc<m && c[nr][nc]!='N' && !vis[nr][nc]){
                        q.push({nr,nc});
                        ans[nr][nc]=2*dis;
                        vis[nr][nc]=1;
                    }
                }
            }
            dis++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j]=='H' && ans[i][j]==0){
                    ans[i][j]=-1;
                }
                else if(c[i][j]!='H'){
                    ans[i][j]=0;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> c(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>c[i][j];
            }
        }
        Solution ob;
        vector<vector<int>> res=ob.chefAndWells(n,m,c);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
// } Driver Code Ends