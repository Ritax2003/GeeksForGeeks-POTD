//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    const int C = 1e9+7;
    long long countWays(int n)
    {
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 4;
        long long a=1,b=2,c=4;
        for(int i=4;i<n+1;i++){
            long long t=c;
            c=(a+b+c)%C;
            a=b;
            b=t;
        }
        return c%C;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends