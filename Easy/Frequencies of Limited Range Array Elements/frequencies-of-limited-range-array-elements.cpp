//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
       int rem = 1 + max(N, P);

    // Iterate through the elements of 'arr'
    for (int i = 0; i < N; i++) {
        // Check if (arr[i] % rem) is greater than N
        if ((arr[i] % rem) > N)
            continue; // If true, skip to the next iteration

        // Increment the value at the index (arr[i] % rem) - 1 by 'rem'
        arr[(arr[i] % rem) - 1] += rem;
    }

    // Divide all elements in 'arr' by 'rem' to obtain the frequencies
    for (int i = 0; i < N; i++)
        arr[i] = arr[i] / rem;
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends