//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int>ans;
        int i,j,hop,sum;
        for(int k=0;k<q;k++){
            sum=0;
            i=queries[k][1];
            j=queries[k][2];
            hop=queries[k][0];
            int r1=i-hop;
            int r2=i+hop;
            int c1=j-hop;
            int c2=j+hop;
            for(int s=c1;s<=c2;s++){
                if(r1>=0 && s>=0 && s<mat[0].size()){
                    sum+=mat[r1][s];
                }
                if(r2<mat.size() && s>=0 && s<mat[0].size()){
                    sum+=mat[r2][s];
                }
            }
            for(int s=r1+1;s<=r2-1;s++){
                if(c1>=0 && s>=0 && s<mat.size()){
                    sum+=mat[s][c1];
                }
                if(c2<mat[0].size() && s>=0 && s<mat.size()){
                    sum+=mat[s][c2];
                }
            }
            ans.push_back(sum);
            }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>q;
        vector<int> queries[q];
        for(int k = 0;k < q;k++){
            cin>>ty>>i>>j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for(int u: ans)
            cout<<u<<"\n";
    }
    return 0;
}
// } Driver Code Ends