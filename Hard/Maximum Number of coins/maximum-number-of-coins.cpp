//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
         int dp[402][402];
        
        int helper(vector<int> &A, int start, int end){
            if(start>end){
                return 0;
            }
            if(dp[start][end]!=-1){
                return dp[start][end];
            }
            int res=INT_MIN;
            for(int burst=start;burst<=end;burst++){
                int cost=A[burst]*A[start-1]*A[end+1]+helper(A,start,burst-1)+helper(A,burst+1,end);
                res=max(res,cost);
            }
            return dp[start][end]=res;
        }
        
        int maxCoins(int N, vector <int> &a){
            memset(dp,-1,sizeof(dp));
            a.insert(a.begin(),1);
            a.push_back(1);
            return helper(a,1,N);
        }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution S;
        cout<<S.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends