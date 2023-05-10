//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        int maxi=INT_MIN;
        int mini=INT_MAX;
        vector<int>v;
        for(int i=N-1;i>=0;i--){
            mini=min(A[i],mini);
            v.push_back(mini);
        }
        int count=0;
        
        for(int i=0;i<N-1;i++){
            maxi=max(A[i],maxi);
            v.pop_back();
            if(v.size()){
            if((maxi+v.back())>=K){
                count++;
            }}
            
            
            
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends