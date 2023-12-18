//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        int ans=0;
        
        for(int i=0;i<N;i++){
            int occurence_forward=N-i;
            int prev_eles=i;
            int occurence_with_prev_eles=prev_eles*occurence_forward;
            
            int total_occurence = occurence_with_prev_eles + occurence_forward;
            if(total_occurence & 1 == 1) ans=ans^A[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.gameOfXor(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends