//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int flag=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                flag=1;
                break;
            }
        }
        if(flag){
            int count=0;
            int i=0;
            while(i<n){
                if(arr[i]!=0){
                    while(i<n && arr[i]!=0) i++;
                    count++;
                }
                else
                i++;
            }
            return count;
        }
        else return 1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends