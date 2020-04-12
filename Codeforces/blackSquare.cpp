// https://codeforces.com/contest/431/problem/A
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


int solve(){

    int res = 0;
    string s;
    int a;
    vector<int> v;
    rep(i,0,3){
        cin >> a;
        v.eb(a);
    }
    cin >> s;
    for(auto x: s){
        //convertir a numero y menos uno extra para el acceso a array
        res+=v[(int) x -49];
    }
    
    return res;
}
int main() {
    SPEED;
    cout << solve() << "\n";
    return 0;
}