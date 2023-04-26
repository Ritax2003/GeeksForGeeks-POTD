//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /* For Each seat if its empty just check the next and previous seat whether its empty (handle the boundary conditions)*/
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
       int c=0;
        for(int i=0;i<m;i++){
            int prev=i-1>=0?seats[i-1]:0; 
            int next=i+1<m?seats[i+1]:0;
            /*These two lines of code set the prev and next variables to the values of the seats immediately 
            to the left and right of the current seat being considered. 
            If the current seat is at the beginning or end of the row, the corresponding prev or next value is set to 0 
            to avoid accessing out-of-bounds elements of the seats vector.

*/      /*This is an if statement that checks whether the current seat is empty (seats[i] equals 0) and whether the seats immediately to the left and right of the current seat are also empty (prev and next both equal 0).
If all three conditions are true, it means that there are three consecutive empty seats, including the current seat.*/
            if(!seats[i]&&prev==0&&next==0){
                /*If the conditions in the if statement are met,
                this increments the c counter variable and marks the current seat as taken by setting its value to 1 in the seats vector.*/
                c++;
                seats[i]=1;
            }
        }
        /*
    After the for loop, this return statement checks whether c is greater than or equal to n.
    If so, it means that there are n or more consecutive empty seats in the room, so the function returns true. Otherwise, it returns false.*/
        return c>=n;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends
