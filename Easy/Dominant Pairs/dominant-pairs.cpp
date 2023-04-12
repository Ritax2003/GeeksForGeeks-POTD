//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
           sort(arr.begin(), arr.begin() + n / 2, greater<int>());
        sort(arr.begin() + n / 2, arr.end(), greater<int>());
        
        int i = 0, j = n / 2;
        int count = 0;
        
        while(i < n / 2 and j < n) {
            if(arr[i] >= 5 * arr[j]) {
                count += n - j;
                i++;
            } else j++;
        }
        
        return count;
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
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends