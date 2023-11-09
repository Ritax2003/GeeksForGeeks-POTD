//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



bool comp(pair<int,int> &a, pair<int,int> &b){
      if(a.first > b.first) return true;
      else if (a.first < b.first) return false;
      return a.second > b.second;
}

class Solution {
  public:
  
    vector<int> topK(vector<int>& nums, int k) {
        vector<pair<int,int>> temp;
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
      /* 
       for(auto i:mp){
           temp.push_back({i.second,i.first});
       }
       sort(temp.begin(),temp.end(),comp);
        for(int i=0;i<k;i++){
            ans.emplace_back(temp[i].second);
        }
        return ans;
        */
        priority_queue<pair<int,int>> pq;
        for(auto i:mp) pq.push({i.second,i.first});
        
        while(k!=0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends