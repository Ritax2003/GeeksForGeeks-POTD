//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  const int m=1e9+7;
    long long fact[100005];
    
    long long binexp(long long x,long long n){
        if(n==0) return 1;
        if(n%2==0){
            return binexp(((x%m)*(x%m))%m,n/2);
        }
        return ((x%m)*binexp(((x%m)*(x%m))%m,(n-1)/2)%m)%m;
    }
    
    long long inv(long long x){
        return binexp(x,m-2);
    }
    
    long long ncr(long long n,long long r){
       long long ans=fact[n];
       ans=(ans%m)*inv(fact[n-r]*fact[r])%m;
       ans%=m;
       return ans;
    }
    
    bool valid(int sum,int a,int b){
        for(int i=sum;i>0;i/=10){
            int x=i%10;
            if(x!=a && x!=b) {
                 return false;
            }
        }
      return true;
    }
    
    int bestNumbers(int n, int a, int b, int c, int d) {
        
        memset(fact,0,sizeof(fact));
        fact[0]=1;
        for(int i=1;i<=100000;i++){
            fact[i]=fact[i-1]*i;
            fact[i]%=m;
        }
        
        long long ans=0;
        for(int i=0;i<=n;i++){
            long long sum=a*i+(n-i)*b;
            if(valid(sum,c,d)){
                ans+=ncr(n,i);
                ans%=m;
            }
        }
        return ans;
    
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int A;
        scanf("%d",&A);
        
        
        int B;
        scanf("%d",&B);
        
        
        int C;
        scanf("%d",&C);
        
        
        int D;
        scanf("%d",&D);
        
        Solution obj;
        int res = obj.bestNumbers(N, A, B, C, D);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends