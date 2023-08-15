//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
         int mx=0,c=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(c<0)c=0;
            if(c>=0)
            {
                if(a[i]==0)
                {
                    c++;
                    mx=max(mx,c);
                }
                else{
                    cnt++;
                    c--;
                }            }
        }
        return (cnt+mx);
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends