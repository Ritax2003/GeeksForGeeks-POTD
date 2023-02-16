//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
         long long int m=GeekNum.size();
        if(m>N)
        return GeekNum[N-1];
        long long int j=m;

        while(j<N){
           long long  int t=K;
            long long int sum=0;
            long long int i=j-1;
            while(t--){
                sum=sum+GeekNum[i];
                i--;
            }
            GeekNum.push_back(sum);
            j++;
        }
        return GeekNum[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends