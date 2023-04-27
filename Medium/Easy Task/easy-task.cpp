//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
/*For Query Type 1 we simply update the string at the required index.
For Query Type 2 we  store the frequency of each character in the string from [left,right] inclusive. 
We need to determine the 'k' th largest lexographical character in the substring.
So we just traverse the hashmap from the reverse direction and count the frequency of each character.
The moment the count exceeds 'k' we have found the answer so we return the corresponding character.*/
     char calc(int m[],int k){
        int c=0;
        char prev='*';
       for(int i=25;i>=0;i--){
           c+=m[i];
           if(c>=k) return (i+'a');
       }
       return 'a';
    }
    vector<char> easyTask(int n,string s,int q,vector<vector<string>> &queries){
        vector<char>ans;
        for(auto i:queries){
            if(i[0]=="1"){
                int ind=stoi(i[1]);
                char ch=i[2][0];
                s[ind]=ch;
            }
            else{
                 int left=stoi(i[1]),right=stoi(i[2]);
                 int k=stoi(i[3]);
                 
                 int m[26]={0};
                 for(int j=left;j<=right;j++)
                     m[s[j]-'a']++;
                 ans.push_back(calc(m,k));
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int q;
        cin>>q;
        vector<vector<string>> queries(q);
        for(int i=0;i<q;i++){
            string x;
            cin>>x;
            if(x=="1"){
                string p,q;
                cin>>p>>q;
                queries[i]={"1",p,q};
            }
            else{
                string p,q,r;
                cin>>p>>q>>r;
                queries[i]={"2",p,q,r};
            }
        }
        Solution ob;
        vector<char> ans=ob.easyTask(n,s,q,queries);
        for(auto ch:ans){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends