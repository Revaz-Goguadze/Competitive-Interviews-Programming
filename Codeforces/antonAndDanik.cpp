//https://codeforces.com/contest/734/problem/A
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

    int n, x = 0;
    string s;
    cin >> n >> s;
    for(auto i: s){
        if(i == 'A')
            x++;
    }
    if(s.size() - x < x){cout << "Anton";}
    if(s.size() - x > x){cout << "Danik";}
    if(s.size() - x == x){cout << "Friendship";}

    
    cout <<"\n";
}
int main() {
    SPEED;

    solve();
    return 0;
}