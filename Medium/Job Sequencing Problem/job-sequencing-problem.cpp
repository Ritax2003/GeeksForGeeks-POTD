//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
      static bool func(Job a,Job b)
    {
        if(a.dead<b.dead)
        {
            return true;
        }
        
        return false;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,func);
        
        priority_queue<int, vector<int>, greater<int> > st;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i].dead==st.size())
            {
                if(st.top()<arr[i].profit)
                {
                    st.pop();
                    st.push(arr[i].profit);
                }
            }
            else if(arr[i].dead>=st.size())
            {
                st.push(arr[i].profit);
            }
        }
        
        int ans_=0;
        
        int m= st.size();
        
        while(!st.empty())
        {
            ans_ += st.top();
            st.pop();
        }
        
        vector<int> ans={m,ans_};
        
        return ans;
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends