//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dy[8] = {0, 0, -1, 1, 1, -1, 1, -1};

    inline bool isValid(int &x, int &y, vector<vector<char>> &grid, char &ch)
    {
        if (x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size() && grid[x][y] == ch)
            return true;

        return false;
    }

    bool find(int x, int y, vector<vector<char>> &grid, string &word)
    {
        // we have to do for 8 directions
        for (int k = 0; k < 8; k++)
        {
            int i = 1;
            int nx = x + dx[k];
            int ny = y + dy[k];

            for (; i < word.length(); i++)
            {
                if (!isValid(nx, ny, grid, word[i]))
                    break;

                nx += dx[k];
                ny += dy[k];
            }

            if (i == word.size())
                return true;
        }
    }

public:
    vector<vector<int>> searchWord(vector<vector<char>> grid, string word)
    {
        vector<vector<int>> ans;

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == word[0])
                {
                    if (find(i, j, grid, word))
                    {
                        ans.push_back({i, j});
                    }
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends