//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        deque <int> q;
        int curr_num;
        int a=0,b=0;
        
        
        for(int i=1;i<=N;i++){
             q.push_back(i);
        }
        while(!q.empty()){
            if(a!=K){
             q.pop_front();
               a++;
               curr_num=q.back();
            }
            else{
                q.pop_back();
                b++;
                if(b==K){
                    b=0;
                    a=0;
                }
                curr_num=q.front();
            }
           
        }
        return curr_num;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends