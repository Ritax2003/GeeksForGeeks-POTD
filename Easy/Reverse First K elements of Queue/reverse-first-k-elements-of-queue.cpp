//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
           stack<int> st;
        int count = k; // change variable name from 'k' to 'count'
        
        while(count > 0) {
            int num = q.front();
            st.push(num);
            q.pop();
            count--;
        }
        
        while(!st.empty()) {
            int num = st.top();
            q.push(num);
            st.pop();
        }
        int rem = q.size()-k;
        while(rem>0){
            int k = q.front();
            q.pop();
            q.push(k);
            rem--;
        }
        return q;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends