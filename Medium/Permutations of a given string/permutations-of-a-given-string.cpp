//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void perm(string s,set<string>&ans,int l,int h)
       {
           if(l==h)ans.insert(s);
           for(int k=l;k<=h;k++)
           {
               swap(s[k],s[l]);
               perm(s,ans,l+1,h);
                  swap(s[k],s[l]);
           
           }
       }
        vector<string>find_permutation(string S)
        {
            // Code here there
            set<string>ans;
            int n=S.length();
            perm(S,ans,0,n-1);
            vector<string> result(ans.begin(), ans.end());
            return result;
        }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends