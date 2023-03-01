//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        vector<int> updateQuery(int N,int Q,vector<vector<int>> &U)
        {
           // code here
            vector<int>ans(N,0); vector<vector<int>>pref(N,vector<int>(31,0));
            for(int i = 0; i < Q; i++){
                int l = U[i][0]-1,r = U[i][1],x = U[i][2];
                for(int j = 0; j < 31; j++){
                    int mask = 1 << j;
                    if(mask & x){
                        pref[l][j]++;
                        if(r < N){
                            pref[r][j]--;
                        }
                    }
                }
            }
            for(int i = 1; i < N; i++){
                for(int j = 0; j < 31; j++){
                    pref[i][j] += pref[i-1][j];
                }
            }
            for(int i = 0; i < N; i++){
                int a = 0;
                for(int j = 0; j < 31; j++){
                    if(pref[i][j]){
                        a |= (1 << j);
                    }
                }
                ans[i] = a;
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
        int n,q;
        cin>>n>>q;
        vector <vector <int>> u(q,vector <int>(3));
        for(int i=0;i<q;i++)
            cin>>u[i][0]>>u[i][1]>>u[i][2];
        Solution a;
        vector <int> ans=a.updateQuery(n,q,u);//<<endl;
        for(auto j:ans)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends