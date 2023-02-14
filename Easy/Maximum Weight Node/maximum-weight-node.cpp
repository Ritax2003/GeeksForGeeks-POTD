//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
     vector<long long> weight(N);

      for(int i=0;i<N;i++){

        if(Edge[i]!=-1){

          weight[Edge[i]]+=i;

        }

      }

      array<long long,2> ans={-1,-1};

      for(int i=0;i<N;i++){

        ans=max(ans,{weight[i],i});

      }

      return ans[1];
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends