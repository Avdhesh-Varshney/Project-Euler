#include <bits/stdc++.h>
using namespace std;

int up(vector<vector<int>>& grid, int x, int y) {
    // x dec y const
    return grid[x-3][y]*grid[x-2][y]*grid[x-1][y]*grid[x][y];
}
int down(vector<vector<int>>& grid, int x, int y) {
    // x inc y const
    return grid[x+3][y]*grid[x+2][y]*grid[x+1][y]*grid[x][y];
}
int left(vector<vector<int>>& grid, int x, int y) {
    // x const y inc
    return grid[x][y+3]*grid[x][y+2]*grid[x][y+1]*grid[x][y];
}
int right(vector<vector<int>>& grid, int x, int y) {
    // x const y dec
    return grid[x][y-3]*grid[x][y-2]*grid[x][y-1]*grid[x][y];
}
int diag_left_up(vector<vector<int>>& grid, int x, int y) {
    // x dec y dec
    return grid[x-3][y-3]*grid[x-2][y-2]*grid[x-1][y-1]*grid[x][y];
}
int diag_left_down(vector<vector<int>>& grid, int x, int y) {
    // x inc y inc
    return grid[x+3][y+3]*grid[x+2][y+2]*grid[x+1][y+1]*grid[x][y];
}
int diag_right_up(vector<vector<int>>& grid, int x, int y) {
    // x dec y inc
    return grid[x-3][y+3]*grid[x-2][y+2]*grid[x-1][y+1]*grid[x][y];
}
int diag_right_down(vector<vector<int>>& grid, int x, int y) {
    // x inc y dec
    return grid[x+3][y-3]*grid[x+2][y-2]*grid[x+1][y-1]*grid[x][y];
}
int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
    	for(int grid_j = 0;grid_j < 20;grid_j++){
    		cin >> grid[grid_i][grid_j];
    	}
    }
    int ans = INT_MIN;
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            // if x is const y is inc
            if(j <= 16)
                ans = max(ans, left(grid, i, j));
            // if x is const y is dec
            if(j >= 4)
                ans = max(ans, right(grid, i, j));
            // if x is inc y is const
            if(i <= 16)
                ans = max(ans, down(grid, i, j));
            // if x is dec y is const
            if(i >= 4)
                ans = max(ans, up(grid, i, j));
            // if x is inc y is inc
            if(i <= 16 and j <= 16)
                ans = max(ans, diag_left_down(grid, i, j));
            // if x is dec y is dec
            if(i >= 4 and j >= 4)
                ans = max(ans, diag_left_up(grid, i, j));
            // if x is inc y is dec
            if(i <= 16 and j >= 4)
                ans = max(ans, diag_right_down(grid, i, j));
            // if x is dec y is inc
            if(i >= 4 and j <= 16)
                ans = max(ans, diag_right_up(grid, i, j));
        }
    }
    cout << ans << endl;
    return 0;
}
