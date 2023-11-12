//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2){
        int anticrot=0 , crot = 0;
        if(str1.length()!=str2.length())return false;
        
        for(int i=0;i<str1.length()-2;i++){
            if(str1[i]==str2[i+2]){
                crot = 1;
            }
            else{
                crot = 0;
                break;
            }
        }
        
        for(int i=str1.length()-1;i>=2;i--){
           if(str1[i]==str2[i-2]){
                anticrot = 1;
            }
            else{
                anticrot = 0;
                break;
            
        }
    }
    
    if(anticrot==1 || crot==1) return true;
    return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends