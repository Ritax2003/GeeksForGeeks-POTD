//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
     long long num,ln,mn=1e10,ans=0,tot=0;

        for(int i=0;i<N;i++){

            num=A[i];

            ln=B[i];

            if(ln%2)

                ln--;

            if(ln>=2){

                mn=min(mn,num);

            }

            ans+=ln*num;

            tot+=ln;

        }

        if(tot%4!=0){

           ans-=2*mn;

        }

        return ans;   // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends