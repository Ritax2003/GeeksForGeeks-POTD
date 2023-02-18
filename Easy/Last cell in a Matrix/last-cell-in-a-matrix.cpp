//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> mat, int r, int c){
        int i=0,j=0;
        int dir=0;
        // 0 - right
        // 1 - down
        // 2 - left
        // 3 - up
        while(true){
            int m=-1,n=-1;
            if(mat[i][j]==0){
                if(dir==0){
                    m=i;
                    n=j+1;
                }
                else if(dir==1){
                    m=i+1;
                    n=j;
                }
                else if(dir==2){
                    m=i;
                    n=j-1;
                }
                else if(dir==3){
                    m=i-1;
                    n=j;
                }
            }
            else{
                mat[i][j]=0;
                if(dir==0){
                    dir=1;
                    m=i+1;
                    n=j;
                }
                else if(dir==1){
                    dir=2;
                    m=i;
                    n=j-1;
                }
                else if(dir==2){
                    dir=3;
                    m=i-1;
                    n=j;
                }
                else if(dir==3){
                    dir=0;
                    m=i;
                    n=j+1;
                }
            }
            if(m<0||n<0||m>=r||n>=c){
                return make_pair(i,j);
            }
            else{
                i=m;
                j=n;
            }
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends