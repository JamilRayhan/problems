// C++ code to find number of unique paths
// in a Matrix
#include <bits/stdc++.h>
using namespace std;

int UniquePathHelper(int i, int j, int r, int c,
					vector<vector<int> >& grid,
					vector<vector<int> >& paths)
{
	// boundary condition or constraints
	if (i == r || j == c) {
		return 0;
	}

	if (grid[i][j] == 0) {
		return 0;
	}

	// base case
	if (i == r - 1 && j == c - 1) {
		return 1;
	}

	if (paths[i][j] != -1) {
		return paths[i][j];
	}

	return paths[i][j]
		= UniquePathHelper(i + 1, j, r, c, grid, paths)
			+ UniquePathHelper(i, j + 1, r, c, grid, paths);
}

int uniquePathsWithObstacles(vector<vector<int> >& grid)
{

	int r = grid.size(), c = grid[0].size();

	cout<<r<<c<<endl;

	vector<vector<int> > paths(r, vector<int>(c, -1));

	return UniquePathHelper(0, 0, r, c, grid, paths);
}

// Driver code
int main()
{
	vector<vector<int> > grid= 
	cout << uniquePathsWithObstacles(grid) << " \n";
}
