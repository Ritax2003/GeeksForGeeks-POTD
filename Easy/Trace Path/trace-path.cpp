//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
        int counth=0;int countv=0;
        int maxh=0;int minh=0;
        int maxv=0;int minv=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if (c=='L'){
                counth--;
                if(counth<minh) minh=counth;
            }
            else if (c=='R'){
                counth++;
                if(counth>maxh) maxh=counth;
            }
            else if(c=='U'){
                countv++;
                if(countv>maxv) maxv=countv;
            }
            else {
                countv--;
                if(countv<minv) minv=countv;
            }
        }
        
        if (maxv-minv+1>n){return 0;}
        if (maxh-minh+1>m){return 0;}
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends