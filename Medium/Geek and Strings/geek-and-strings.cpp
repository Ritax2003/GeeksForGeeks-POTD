//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> prefixCount(int n, int Q, string li[], string query[])
    {
        vector<int>  ans;
       unordered_map<string,int> m;
       
        for(int i=0;i<Q;i++)
            m[query[i]];
        
        int max_ele=0;
       
        for(auto x:m){
           if((x.first).size()>max_ele)
               max_ele=x.first.size();
           
       }
       
        for(int i=0;i<n;i++){
            string ch="";
            for(int j=0;j<max_ele&&j<li[i].size();j++){
                ch+=li[i][j];
                if(m.find(ch)!=m.end()){
                    m[ch]++;
                }
            }
       }
        
      for(int i=0;i<Q;i++){
          ans.push_back(m[query[i]]);
        }
        
     return ans;
    }
 
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int Q, N, i = 0, x;
	    cin>>N;
	    string s;
	    string li[N];
	    for(int i = 0;i < N;i++)
	        cin>>li[i];
	    cin>>Q; 
	    x = Q;
	    string query[Q];
	    while(Q--){
	        cin>>s;
	        query[i++] = s;
	    }
	    
	    Solution ob;
	    vector<int> ans = ob.prefixCount(N, x, li, query);
	    for(auto i: ans) 
	        cout<<i<<"\n";
    }
    return 0;
}
// } Driver Code Ends