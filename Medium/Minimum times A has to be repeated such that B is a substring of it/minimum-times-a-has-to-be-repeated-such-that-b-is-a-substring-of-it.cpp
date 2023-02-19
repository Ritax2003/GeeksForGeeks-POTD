//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
     int minRepeats(string a, string b) {
          int ans=0;
        int n =a.size();
       int m =b.size();
        unordered_map<char,int>check;
        for(int i=0;i<n;i++){
            check[a[i]]++;
        }
        for(int i=0;i<m;i++){
            if(check.find(b[i])==check.end()) return -1;
        }
        int i=0,j=0;
        bool firstpass=true;
        while(j<m){
            if(a[i]==b[j]){
               // if(i>0)                 
                i++;
                j++;
                continue;
            }
            else{  
                 if(i==n ) {
                    ans++;
                    i=0;
                   firstpass=false;
                } 
             else if(firstpass){
                 i++;

            }
                else return -1;
            }
        }
       return ans+1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends