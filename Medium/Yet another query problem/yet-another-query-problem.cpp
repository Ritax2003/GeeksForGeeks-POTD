//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int n, int num, vector<int> &a, vector<vector<int>> &q) {
        vector<int> sf(n,0);

        sf[n-1] = 1;

        for(int i=n-2;i>=0;i--){

            int x = a[i];

            for(int j=n-1;j>=i;j--){

                if(a[j]==x) sf[i]++;

            }

        }

        vector<int> ans;

        for(int i=0;i<q.size();i++){

            int x = q[i][0];

            int y = q[i][1];

            int k = q[i][2];

            int cur = 0;

            for(int j=x;j<=y;j++){

                if(sf[j]==k) cur++;

            }

            ans.push_back(cur);

        }

        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends