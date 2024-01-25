//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#define N 10002

class Solution{   
public:
    bool p[N];
    void buildSeive(){
        for(int i=2; i<=N; i++)
            p[i] = true;

        for(int i=2; i*i<=N; i++)
            if(p[i]){
                for(int j=i*i; j<=N; j+=i)
                    p[j] = false;
            }
    }

    int solve(int n1,int n2){   
        // n1 --> n2
        queue<pair<int,int>> q; // {Pnum, dist}
        bool vis[N] = {0};

        q.push({n1,0});
        vis[n1] = true;
        int minDist = 1e8;
        buildSeive();

        while(!q.empty()){
            auto it = q.front();
            int n = it.first;
            int dist = it.second;
            q.pop();

            if(n==n2){
                minDist = min(minDist, dist);
                if(minDist==0)
                    break;
            }

            for(int d=1; d<=n; d*=10){
                int dig = (n/d)%10;
                for(int i=0; i<=9; i++){
                    if((i==0 && d==4) || i==dig)
                        continue;
                    int num = n - dig*d + i*d;
                    if(num>=1000 && p[num] && !vis[num]){
                        vis[num] = true;
                        q.push({num, dist+1});
                    }
                }
            }
        }

        return minDist;

    }
};


//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int num1,num2;
      cin>>num1>>num2;
      Solution obj;
      int answer=obj.solve(num1,num2);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends