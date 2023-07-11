//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k){
 		int rowstart=0,colstart=0;
 		int rowend = n-1,colend = m-1;
 		while(rowstart<=rowend && colstart <=colend){
 		    for(int col = colstart;col<=colend;col++){
 		        k--;
 		        if(k==0) return a[rowstart][col];
 		    }
 		    rowstart++;
 		     for(int row = rowstart;row<=rowend;row++){
 		        k--;
 		        if(k==0) return a[row][colend];
 		    }
 		    colend--;
 		     for(int col = colend;col>=colstart;col--){
 		        k--;
 		        if(k==0) return a[rowend][col];
 		    }
 		    rowend--;
 		     for(int row = rowend;row>=rowstart;row--){
 		        k--;
 		        if(k==0) return a[row][colstart];
 		    }
 		    colstart++;
 		}
 		
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends