//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
          map<int,long long> mp;
        for(int i = 0 ; i<n ;i++){
            mp[arr[i]]+=arr[i];
        }
        long long sum=0,temp=0;
        for(auto it:mp){
            temp = it.second;
            mp[it.first] = sum;
            sum+=temp;
        }
        vector<long long> ans(n);
        for(int i = 0 ; i<n ; i++){
            ans[i]=mp[arr[i]];
        }
        return ans;
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
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends