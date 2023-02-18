//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
         stack<char> st1, st2;
 for (auto ch: s) st1.push(ch);
 while(!st1.empty()) {
 if (st2.empty()) {
 st2.push(st1.top());
 st1.pop();
 }
 else if (st1.top() == st2.top()) {
 st2.pop();
 st1.pop();
 }
 else {
 st2.push(st1.top());
 st1.pop();
 }
 }

 string ans;
 if (st2.empty())
 ans = "-1";
 
 
 while(!st2.empty()) {
 ans += st2.top();
 st2.pop();
 }

 

 

 return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends