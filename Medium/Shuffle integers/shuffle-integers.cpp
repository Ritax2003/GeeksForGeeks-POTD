//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    for(int i=0; i<n; ++i)  arr[i] *= 10000;
	    
	    int p = 1;
	    for(int i = n/2; i<n; ++i){
	        arr[p] += arr[i]/10000;
	        p = p + 2;
	    }
	    
	    p = 0;
	    for(int i = 0; i<n/2; ++i){
	        arr[p] += arr[i]/10000;
	        p = p+2;
	    }
	    
	    for(int i = 0; i<n; ++i)  arr[i] %= 10000;
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
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends