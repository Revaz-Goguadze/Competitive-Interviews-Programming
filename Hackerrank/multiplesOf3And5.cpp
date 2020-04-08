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

void solve(){
    long  n;
    cin >> n;
    n--;
    long  n3 = n/3, n5 = n/5, n15 = n/15;
    long  sum3 = 3*n3*(n3+1) / 2;
    long  sum5 = 5*n5*(n5+1) / 2;
    long  sum15= 15*n15*(n15+1)/2;
    cout <<  sum3+sum5 - sum15 << "\n";

}

int main() {
    SPEED;
    
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}