//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	     vector<int>sum(n,0);
	    sum[n-1] = arr[n-1];
	    for(int i=n-2;i>=0;i--){
	        int sumi = arr[i];
	        int addi = 0;
	        for(int j = i+1;j<n;j++){
	            if(arr[j]>arr[i]){
	                addi = max(addi,sum[j]);
	            }
	        }
	        sum[i] = addi + sumi;
	    }
	    int maxi=INT_MIN;
	    for(int i=0;i<n;i++){
	        maxi = max(maxi,sum[i]);
	    }
	    return maxi;
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends