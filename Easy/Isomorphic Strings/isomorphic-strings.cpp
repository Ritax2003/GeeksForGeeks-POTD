//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
        
        if(s1.length()!=s2.length())
        return 0;
        map<char,char> mp1,mp2;
        for(int i=0;i<s1.length();i++){
            mp1[s1[i]]=s2[i];
            mp2[s2[i]]=s1[i];
        }
        for(int i=0;i<s1.length();i++){
            
            if((mp1[s1[i]]!=s2[i])||(mp2[s2[i]]!=s1[i]))
            return false;
            
        }
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends