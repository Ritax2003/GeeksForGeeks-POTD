//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
  long long int sum(vector<int>A){
     long long int res=0;
      for(int i=0;i<A.size();i++){
          res+=A[i];
      }
      return res;
  }
    long long int minimumInteger(int N, vector<int> &A) {
        long long int res = sum(A);
        long long int smallest = INT_MAX;
        for(int i=0;i<A.size();i++){
            if(A.size()*A[i]>=res && A[i]<smallest){
                smallest = A[i];
            }
        }
        return smallest;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.minimumInteger(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends