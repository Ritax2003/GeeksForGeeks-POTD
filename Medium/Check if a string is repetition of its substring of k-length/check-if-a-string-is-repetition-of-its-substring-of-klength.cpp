//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    if(n%k!=0)return(0);
        else{
            unordered_map<string,int>umap;
            int j=0;
            while(j<=n-k){
                string temp=s.substr(j,k);
                umap[temp]++;
                j+=k;
            }
            if(umap.size()>2)return(0);
            else return(1);
        }
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int k; cin >> k;
        Solution  ob;
		cout << ob.kSubstrConcat (n, s, k) << endl;
	}
}
// } Driver Code Ends