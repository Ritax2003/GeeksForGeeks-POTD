//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int sum = -1;
        for(int i = 0; i< n; i++){
            int row_sum = 0;
            for(int j = 0; j< n; j++)
                row_sum += matrix[i][j];
                
            sum = max(sum, row_sum);    
        }
        
        for(int i = 0; i< n; i++){
            int col_sum = 0;
            for(int j = 0; j< n; j++)
                col_sum += matrix[j][i];
                
            sum = max(sum, col_sum);    
        }
        
        int res = 0;
        for(int i = 0; i< n; i++){
            int row_sum = 0;
            for(int j = 0; j< n; j++)
                row_sum += matrix[i][j];
                
            res += (sum - row_sum); 
        }
        
        return res;
    } 
    /*Simple Approach:

1. create sums of all rows (rsum) and columns (csum)

2. get max of rsum[] (rmax) and csum[]. (cmax)

2. osum = max(cmax, rmax).

3. determine how many operations are required to equal the osum on all rows and columns

 */
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends