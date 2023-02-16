//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
      bool dfs(int i,vector<int> &arr,vector<bool> &visit,vector<bool> &inc)

    {

        if(i<0||i>=arr.size())

            return false;

        

        if(inc[i]==true)

            return true;

        if(visit[i]==true)

            return false;

        visit[i]=true;

        inc[i]=true;

        

        bool next=dfs(i+arr[i],arr,visit,inc);

        if(next==true)

            return true;

        inc[i]=false;

        return false;

    }

    int goodStones(int n,vector<int> &arr)

    {

        vector<bool> visit(n,false);

        vector<bool> inc(n,false);

        

        for(int i=0;i<n;i++)

        {

            if(visit[i]==false)

                dfs(i,arr,visit,inc);

        }

        int ans=0;

        

        for(bool c:inc)

        {

            if(c)

                ans++;

        }

        return n-ans;

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
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends