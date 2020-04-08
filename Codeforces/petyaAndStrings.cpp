//!https://codeforces.com/contest/112/problem/A
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
    string s,c;
    cin >> s >> c;
    for(int i = 0; i < s.size(); i++){
        if(tolower(s[i]) != tolower(c[i])){
            if(int(tolower(s[i])) > (int)tolower(c[i])){
                return "1";
            }else{
                return "-1";
            }
        }
    }
    return "0";
    
    cout <<"\n";
}
int main() {
    SPEED;
    cout << solve();
    return 0;
}