//!https://codeforces.com/contest/1334/problem/A
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


string solve(){
    int n;
    cin >>n;
    int p,c;
    vector<pair<int,int>> cp;
    while(n--){
        cin >> p >> c;
        cp.eb(mp(p,c));
    }
    if(cp[0].first < cp[0].second){return "NO";} 
    for(int i = 1; i < cp.size(); i++){
        auto x = cp[i];
        auto prevX = cp[i-1];
        if(x.first < x.second){ return "NO"; }
        if(x.first < prevX.first || x.second < prevX.second){ return "NO"; }
        if(x.second - prevX.second > x.first - prevX.first) {return "NO"; }
        if(x.first+prevX.first < x.second+prevX.second){ return "NO"; }
    }
    return "YES";
}
int main() {
    SPEED;
    int t;
    cin >> t;
    while(t--)
        cout << solve() << "\n";
    return 0;
}