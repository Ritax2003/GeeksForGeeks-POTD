//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    int cnt=0;
                    // Go to all it's neighbours
                    for(int x=-1;x<=1;x++){
                        for(int y=-1;y<=1;y++){
                            int newRow=i+x,newCol=j+y;
                            // check if neighbours are not outside the matrix
                            if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && matrix[newRow][newCol]==0) cnt++;
                        }
                    }
                    if(cnt%2==0 && cnt>0) ans++;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends