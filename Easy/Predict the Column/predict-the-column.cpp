//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int n){
        
       vector<int> a;
        for(int j=0; j<n; j++){
            int z=0;
            int k=0;
            while(k<n){
                if(arr[k][j] == 0) z++;
                k++;
            }
            a.push_back(z);
        }
        int m = *max_element(a.begin(), a.end());
        for(int i=0; i<a.size(); i++){
            if(a[i] == m && a[i] !=0) return i;
        }
        return -1;
        
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends