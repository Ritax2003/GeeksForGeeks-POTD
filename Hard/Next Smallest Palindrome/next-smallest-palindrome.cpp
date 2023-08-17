//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
vector<int> generateNextPalindrome(int nums[], int n) {
	    // code here
	    if(n==1&&nums[0]==9)return {1,1};
	    bool flag=false;
	    for(int i=0;i<n/2;i++)
	    {
	        if(nums[n-1-i]>nums[i])
	        flag=false;
	        else if(nums[n-1-i]<nums[i])
	        flag=true;
	        nums[n-1-i]=nums[i];
	    }
	    vector<int>ans;
	    for(int i=0;i<n;i++)
	    {
	        ans.push_back(nums[i]);
	    }
	    if(flag)return ans;
	    
	    int carry=1;
	    for(int i=(n-1)/2;i>=0;i--)
	    {
	        ans[i]+=carry;
	        if(ans[i]==10)
	        {
	            carry=1;
	        }
	        else
	        {
	            carry=0;
	           
	        }
	        ans[i]%=10;
	        ans[n-1-i]=ans[i];
	        
	    }
	    vector<int>res;
	    if(carry==1)
	    {
	        res.push_back(1);
	    }
	    for(int i=0;i<n;i++)
	    {
	        res.push_back(ans[i]);
	        
	    }
	    if(carry==1)
	    {
	        res[res.size()-1]=1;
	    }
	    
	    return res;
	}
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends