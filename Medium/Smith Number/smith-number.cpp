//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    bool isPrime(int n){
        if(n==2 || n==3)
            return true;
        if(n%2 == 0 || n%3 == 0)
            return false;
        for(int i=5; i*i<n; i+=6){
            if(n%i==0 || n%(i+2)==0)
                return false;
        }
        return true;
    }
    int smithNum(int n) {
        // code here
        int numsum = 0, k = n, pfsum = 0;
        while(k){
            numsum += k%10;
            k /= 10;
        }
        
        k = n;
        
        for(int i=2; i<((n/2)+1); i++){
            if(k%i == 0){
                if(isPrime(i)){
                    int t = i, tem = 0;
                    while(t){
                        tem += t%10;
                        t /= 10;
                    }
                    while(k%i==0){
                        pfsum += tem;
                        k /= i;
                    }
                }
            }
        }
        if(pfsum==numsum)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends