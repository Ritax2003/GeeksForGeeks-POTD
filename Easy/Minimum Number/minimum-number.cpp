//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
int gcd(int a,int b){
    if(a==b) return a;
    if(a>b) 
        gcd(a-b,b);
    else 
        gcd(a,b-a);
}
    int minimumNumber(int n,vector<int> &arr){
       int a = arr[0];
       for(int i =1;i<n;i++){
           a = __gcd(a,arr[i]);
       }
       return a;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.minimumNumber(n,arr)<<endl;
    }
}
// } Driver Code Ends