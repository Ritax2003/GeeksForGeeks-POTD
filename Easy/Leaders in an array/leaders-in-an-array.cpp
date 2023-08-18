//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
         vector<int> ans;  // To store the leaders
        int maxi = a[n-1]; // Initialize the maximum element to the rightmost element
        ans.push_back(maxi); // The rightmost element is always a leader
        
        // Iterate from the second-to-last element to the first element
        for (int i = n - 2; i >= 0; i--) {
            // Check if the current element is greater than or equal to the maximum so far
            if (a[i] >= maxi) {
                ans.push_back(a[i]); // If it is, it's a leader
                maxi = a[i]; // Update the maximum
            }
        }
        
        reverse(ans.begin(), ans.end()); // Reverse the order to get the correct sequence
        return ans; 
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends