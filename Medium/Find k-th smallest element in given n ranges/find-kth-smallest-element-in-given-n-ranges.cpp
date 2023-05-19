//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        
        for(auto it: intervals){
            if(!ans.empty() && it[0]<=ans.back()[1]){
                ans.back()[1] = max(ans.back()[1],it[1]);
            }
            else ans.push_back(it);
        }

        return ans;
    }
    
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        range = merge(range);
        n = range.size();
        
        vector<int>ans;
        
        for(int i=0;i<q;i++){
            int k = queries[i];
            
            for(int i=0;i<n;i++){
                int total = range[i][1]-range[i][0]+1;
                if(total>=k){
                    ans.push_back(range[i][0]+k-1);
                }
                k-=total;
                if(k<=0)break;
            }
            if(k>0)ans.push_back(-1);
        }
        
        return ans;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends