//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	    long long sum = 1;
        long long nb = 0;
   queue<long long> que;
   que.push(1);

    // for each day gone by,
   for (int i = 1; i < n; ++i){
	// if there are any chicken lived for 6 days, they die.
	if (que.size() == 6)
	{
		sum -= que.front();
		que.pop();
	}
	
	// for all those living chicken, they provoid 2 new born chickens,
	nb = sum * 2;
	// those new born chickens start to live this day
	que.push(nb);
	// update the total number.
	sum += nb;
}

return sum;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends