//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) {
       vector<long long> ans ;
        if(n==1) return {1} ;
        else if(n==2) return {1,1} ;
        long long  a = 1 , b = 1 , cnt = 2;
        ans.push_back(1);
        ans.push_back(1);
        while(cnt<n)
        {
            a = a+b ;
            b = a-b ;
            ans.push_back(a);
            cnt++ ;
        }
        return ans ;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends