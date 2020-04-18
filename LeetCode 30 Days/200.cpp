//!https://leetcode.com/problems/number-of-islands/
#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define INF 1e18
#define eps 0.00001
#define le length
#define debug(n1) cout << n1 << endl
#define rep0(i,n) for (i = 0; i < n; ++i) 
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)


int numIslands(vector<vector<char>>& grid) {
    int x = grid.size(), y = 0, numIslands = 0;
    if(x) y = grid[0].size();
    
    // iterate through grid and call findIsland when grid[i][j] = '1'
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(grid[i][j] == '1'){
                findIsland(i, j, grid);
                numIslands++;
            }
        }
    }
    return numIslands;
}
void findIsland(int a, int b, vector<vector<char>>& grid) {
    int x = grid.size(); int y = grid[0].size();
    
    // if out of bounds or not '1', return
    if( a < 0 or b < 0 or a >= x or b >= y or grid[a][b] != '1') return;
    
    // set the '1' to be '0' so not recounted
    grid[a][b] = '0';
    
    // recurse in all 4 directions
    int changeX[4] = {0,-1,1,0}, changeY[4] = {-1,0,0,1};
    for(int i = 0; i < 4; i++)  findIsland(a + changeX[i], b + changeY[i], grid);

}

int main(){

    SPEED;
    return 0;
}