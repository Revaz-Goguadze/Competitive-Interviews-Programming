//!https://www.hackerrank.com/challenges/maximum-draws/
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
 * Nos dan pares de calcetines y tenemos que regresar cuantos pares tenemos que sacar 
 * para obtener por lo menos un par correcto
 * entonces tenemos que sacar la mitad de calcetines + 1 siempre
 * entonces seria n/2 -1 pero en este caso como ya nos dan los numeros de pares solo es n+1 
 */ 
void solve(){
    int n;
    cin >> n;
    cout <<  n+1<< "\n";
}

int main() {
    SPEED;
    
    int t; 
    cin >> t;
    while(t--)
        solve();

    return 0;
}