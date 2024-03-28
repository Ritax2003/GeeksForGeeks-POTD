//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        vector<int> knows(n+1,0);
        vector<int> known(n+1,0);
        for(int i=0;i<M.size();i++){
            for(int j=0;j<M[0].size();j++){
                if(M[i][j]!=0) known[j]++;
                if(M[i][j]!=0) knows[i]++;
            }
        }
        int ans = -1;
         for(int i=0;i<M.size();i++){
            if(knows[i] == 0 && known[i] == M.size()-1)
                ans = i;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends