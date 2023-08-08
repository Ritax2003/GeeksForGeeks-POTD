//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        long long n=N;
        vector<long long>ans;
        long long i;
        for(int i=2;i*i<=n;++i){
            while(n%i==0){
                ans.push_back(i);
                n/=i;
            }
        }
        if(n>1)ans.push_back(n);
        return *max_element(ans.begin(),ans.end());
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends