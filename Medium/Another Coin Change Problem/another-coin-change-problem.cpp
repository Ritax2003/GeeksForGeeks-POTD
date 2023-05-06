//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
  vector<vector<vector<int>>> cache;
  bool dp(vector<int>&coins,int indx,int amt, int k){
      if(indx>=coins.size()) return false;
      if(cache[indx][k][amt]!=-1) return cache[indx][k][amt];
      if(k == 0) {
          if(amt == 0) return true;
          return false;
      }
      bool take = false,notTake = false;
      if(amt>=coins[indx]){
        take = take || dp(coins,indx,amt-coins[indx],k-1);
      }
      notTake = notTake || dp(coins,indx+1,amt,k);
      return cache[indx][k][amt]=(take || notTake);
  }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        sort(coins.rbegin(),coins.rend());
        cache.resize(N + 1,vector<vector<int>>(K + 1,vector<int>(target + 1, -1)));
        
        bool ans = dp(coins,0,target,K);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends