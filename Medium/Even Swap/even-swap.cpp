//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
       vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            int prev=0;
            for(int i=1;i<n;i++)
            {
                if(a[i]%2==a[i-1]%2)// odd odd or even even
                    continue;
                else // previous group was a group that can be sorted
                {
                     sort(a.begin()+prev,a.begin()+i,greater<int>{});
                     prev=i; // new group starting here
                }
            }
            sort(a.begin()+prev,a.end(),greater<int>{});
            return a;
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
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends