//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        int n = S.size();
        
        string ans = "";
        for(int i=1; i<=n+1; i++)
            ans += to_string(i);
            
        for(int i=0; i<n; i++) {
            if(S[i] == 'I')
                continue;
            
            int cnt = 1;
            int k = i;
            while(i<n and S[i] == 'D') {
                cnt++;
                i++;
            }
            
            reverse(ans.begin()+k, ans.begin()+k+cnt);
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends