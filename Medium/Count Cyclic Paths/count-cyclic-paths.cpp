//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int countPaths(int N){
        long long int mod=1e9+7,l1=1,h1=0,l2=1,h2=0l;

        for(int i=2;i<=N;i++)

        {

            h1=(3*l2)%mod;

            l1=(((2*l2)%mod)+h2)%mod;

            l2=l1;

            h2=h1;

        }

 

        return (int)h1;
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
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends