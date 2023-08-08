//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int num[], int den[]){
           unordered_map<long double, int>m;
        int ans = 0;
        for(int i = 0; i < n; i++){
            long double ab = num[i]*1.0/den[i];
            long double bc = (den[i] - num[i])*1.0/den[i];
            if(m.find(bc) != m.end())
                ans += m[bc];
            m[ab]++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends