//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

           vector<long> prev(sum + 1, 0) , cur(sum+1 , 0);

    for(int tar = 0; tar <= sum ; tar++){
        prev[tar] = (tar%coins[0] == 0);
    }
    for(int ind = 1; ind< N ; ind++){
      for (int tar = 0; tar <= sum; tar++) {
        long notpick = prev[tar];
        long pick = 0;
        if (tar >= coins[ind])
          pick = cur[tar - coins[ind]];

        cur[tar] = pick + notpick;
      }
      prev = cur;
    }
     return prev[sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends