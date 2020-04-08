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
 * Queremos saber cuantos saludos se hacen entre dos personas en una sala con N personas
 * pero la persona solo saluda a esa persona 1 vez, entonces esto es problema de combinaciones o sumatoria
 * ya que no quieres repetidos, entonces se usa la formula n(n-1)/2 
 */ 
void solve(){
    int n;
    cin >> n;
    cout << n*(n-1)/2 << "\n";
}
int main() {
    SPEED;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}