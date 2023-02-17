//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string str){
        vector<int> v;

        for(int i=0;i<n;i++) if(str[i]=='O') v.push_back(i);        

        if(v.size()==0) return n;

        if(v.size() <= m) return n;

 

        int ans=INT_MIN;

        ans=max(ans,v[m]);

        int i=1;

        int j=m;        

        while(j<v.size()-1)

        {

            ans=max(ans,(v[j+1]-1) - (v[i-1]+1) + 1 );

            i++;

            j++;

        }

        ans=max(ans,n-v[i-1]-1);

 

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
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends