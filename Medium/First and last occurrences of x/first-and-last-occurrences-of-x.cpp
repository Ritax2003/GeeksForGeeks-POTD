//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x ){
        int a=0, b=0;
    for(int i=n/2; i>0; i/=2)
        while(a+i<n && arr[a+i]<x) a+=i;
    for(int i=n/2; i>0; i/=2)
        while(b+i<n && arr[b+i]<=x) b+=i;
    if(arr[a]!=x && a<n-1)
        a++;
    if(arr[a]!=x||arr[b]!=x) return {-1, -1};
    return {a, b};
    /*
    int a=lower_bound(arr,arr+n,x)-arr;
        int b=upper_bound(arr,arr+n,x)-arr;
        if(arr[a]!=x){
            return {-1,-1};
        }
        return {a,b-1};*/
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends