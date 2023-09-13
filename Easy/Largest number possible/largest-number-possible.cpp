//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
         string v;
        
        if((s>9*n)  || (s==0)&&(n>1)) return "-1";
        
        for(int i=0;i<n;i++){
            
            if(s<9){
                v.push_back(s+'0');
                s=0;
            }
            else{
                v.push_back('9');
                s -=9;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends