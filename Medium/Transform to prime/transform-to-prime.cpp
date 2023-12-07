//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool isPrime(long long N){
        if(N==0 || N==1) return false;
        for(int i=2;i*i<=N;i++){
            if(N%i==0) return false;
        }
        return true;
    }
    int minNumber(int arr[],int N){
        long long sum =0;
        for(int i =0;i<N;i++){
            sum+=arr[i];
        }
        if(isPrime(sum)==1) return 0;
        long long count =0;
        while(isPrime(sum+count)!=1){
            count++;
        }
        return count;
        /*while(true){
            if(isPrime(sum+count)==1)return count;
            else count++;
        }
        */
            
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends