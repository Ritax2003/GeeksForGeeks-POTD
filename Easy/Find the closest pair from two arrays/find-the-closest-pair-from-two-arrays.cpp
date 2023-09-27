//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        int i=0;
        int j=m-1;
        int ans1 = -1;
        int ans2 = -1;
        int val = INT_MAX;
        vector<int> ans;
        
        while(i<n && j>=0){
            int sum =arr[i]+brr[j];
            int check = x - sum;
            int temp = abs(x-sum);
            
            if(val > temp){   
                    val = temp;
                    ans1 = arr[i];
                    ans2 = brr[j];
            }
                
            if(check < 0){
               j--;
            }
            else{
                i++;
            }
        }
        // cout<<ans1<<" "<<ans2<<endl;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends