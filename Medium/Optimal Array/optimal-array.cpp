//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        int sum1=0,sum2=0;

        vector<int> ans;

        int mid=(n+1)/2;

        for(int i=0;i<mid;i++){

            sum1+=a[i];

            if(i*2<n){

                sum2+=a[i*2];

                int diff=((i+1)*a[i])-sum1+((sum2-sum1)-i*a[i]);

                ans.push_back(diff);

            }

            if(i*2+1<n){

                sum2+=a[i*2+1];

                int diff=((i+1)*a[i])-sum1+((sum2-sum1)-(i+1)*a[i]);

                ans.push_back(diff);

            }

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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution obj;
        vector<int> ans=obj.optimalArray(n,a);
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends