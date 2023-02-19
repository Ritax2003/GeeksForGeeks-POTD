//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int a, int b) {
       if(a==b) return 0;
        int count1=0,count2=0;
        for(int i=1;i<=32;i++)
        {
            int x = a>>i & 1;
            int y = b>>i & 1;
            if(x==0 && y==1) count1=1;
            if(x==1 && y==0) count2=1;
        }
        
         return count1 + count2;
        // code here
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.solve(a, b);
        
        printf("%d\n", res);
        
    }
}

// } Driver Code Ends