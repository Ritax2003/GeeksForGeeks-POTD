//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        int cnt = 0, x = 0;
        while(b > 0)  {
            
            if(b%2 > 0) cnt++;
            b /= 2;
        }
    for(int i=31;i>=0&& cnt>0;i--){
        int mask=1<<i;
        if(a&mask) {
            x=x|mask;
        cnt--;
        }
    }
    for(int i=0;i<=31&& cnt>0;i++){
        int mask=1<<i;
        if((a&mask)==0){
            x=x|mask;
            cnt--;
        }
    }
    return x;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends