//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    int odd=0,even=0;
	    for(int i =0;i<s.size();i++){
	        if(i%2==0 and s[i]=='1') even++;
	        else if(i%2==1 and s[i]=='1') odd++;
	    }
	    if(abs(even-odd)%3==0) return 1;
	    else return 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends