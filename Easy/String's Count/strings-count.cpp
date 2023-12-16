//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int factUtil(long long int a, long long b){
    long long res = 1;
    while(a!=b){
        res = res * a;
        a--;
    }
    return res;
}
long long int countStr(long long int n){
    //complete the function here
    long long int x = factUtil(n,n-2);
    long long int y = factUtil(n,n-3);
    return 1+n+n+(x/2)+x+(y/2);
}