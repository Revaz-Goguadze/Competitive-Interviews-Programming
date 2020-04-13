//https://leetcode.com/problems/flipping-an-image/solution/
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

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

    //Para cada linea se voltea y se aplica Xor de 1 para invertir signo
    for(int i = 0; i<A.size(); i++){
        reverse(A[i].begin(), A[i].end());
        for(int j = 0; j < A[i].size(); j++){
            A[i][j]^=1;
        }
    }
    return A;
}
int main() {
    SPEED;
    

    return 0;
}