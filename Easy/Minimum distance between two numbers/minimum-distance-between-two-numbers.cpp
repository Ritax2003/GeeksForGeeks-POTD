//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
       int x_position = -1;
        int y_position = -1;
        int ans = -1;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                x_position = i;
            }
            if(a[i]==y){
                y_position = i;
            }
            
            if(x_position!=-1 && y_position!=-1){
                int val = abs(y_position - x_position);
                if(ans == -1) ans = val;
                else{
                    ans = min(ans,val);
                }
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends