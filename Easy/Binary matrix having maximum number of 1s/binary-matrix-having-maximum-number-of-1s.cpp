//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
     /*int n = mat.size();
     int count=0,row=0;
     for(int j=0;j<n;j++){
         int k = n-1-count;
         while(mat[j][k]==1 && k>=0){
             k--;
             row=j;
            count++;
         }
     }
     return vector<int>{row,count};
    }*/
    int count=0,maxcount=0,maxrow=0;
    vector<int> ans;
    for(int i =0;i<N;i++){
        for(int j =0;j<N;j++){
            if(mat[i][j]==1) count++;
        }
    
    if(maxcount<count) maxrow = i;
    maxcount = max(count,maxcount);
    count = 0;
    }
    
    ans.push_back(maxrow);
    ans.push_back(maxcount);
    
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends