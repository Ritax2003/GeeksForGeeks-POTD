//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
         map<int,int> mp;
        int ans = -1;
        for(auto &it:intervals)
        {
            mp[it[0]]+=1;
            mp[it[1]+1]-=1;
        }
        int count=0;
        for(auto &it:mp)
        {
            count+=it.second;
            if(count>=k) ans  = it.first;
            else if(count-it.second>=k) ans = it.first-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends