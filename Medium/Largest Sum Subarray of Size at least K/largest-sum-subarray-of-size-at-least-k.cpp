//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    #define ll long long
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) {
        ll int ans = INT_MIN;
        ll int sum =0;
        ll int last = 0;
        ll int j =0;
        
        for(ll int i =0;i<n;i++){
            sum+= a[i];
            if(i - j +1 == k) ans = max(sum,ans);
            else if (i - j+1 > k){
                last+=a[j];
                j++;
                if(last<0){
                    sum-=last;
                    last=0;
                }
                ans = max(sum,ans);
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends