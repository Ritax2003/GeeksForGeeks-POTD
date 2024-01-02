//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) {
         long long int ans = INT_MIN;
        long long int sum = 0;
        long long int last = 0;
        long long int j = 0;
        for(long long int i = 0; i < n; i++)
        {
            sum += a[i];
            if(i - j + 1 == k)
                ans = max(ans, sum);
            else if(i - j + 1 > k)
            {
                last += a[j];
                j++;
                if(last < 0)
                {
                    sum -= last;
                    last = 0;
                }
                ans = max(ans, sum);
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