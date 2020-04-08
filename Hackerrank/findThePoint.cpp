//!https://www.hackerrank.com/challenges/find-the-point
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

/**
 * El poin reflection de un punto es el mismo en voltedo 180 lados alrededor de un punto
 * en este caso se quiere el punto R(Rx,Ry) que es la inversion del punto P a través del punto 
 * Q, entonces se considera que el punto Q es el punto medio de P->R por lo tanto la formula 
 * del punto medio es Mx = Px + Rx / 2 entonces si hacemos el despeje nos queda
 * Rx = 2Mx - Px
 * Ry = 2My - Py
 * M = Q
 */
void solve(){
    int pX,pY, qX, qY, rX, rY;
    cin >> pX >> pY >>qX >> qY;
    rX = 2*qX - pX;
    rY = 2*qY - pY;

   cout << rX << " " << rY << "\n";
    
}

int main() {
    SPEED;
    
    int n;
    cin >> n;
    while(n--)
        solve();
    return 0;
}