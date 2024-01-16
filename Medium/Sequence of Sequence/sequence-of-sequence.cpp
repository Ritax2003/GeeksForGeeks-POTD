//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   
    int numberSequen(int m,int n){
         if(m==0){
            return 1;
        }
        if(n==0){
            return 0;
        }
        int pick=numberSequen(m-1,n/2);
        int notpick=numberSequen(m,n-1);
        return pick+notpick;
    }
    int numberSequence(int m, int n){
      return numberSequen(n,m);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends