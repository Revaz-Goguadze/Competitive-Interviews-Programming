//!https://leetcode.com/problems/to-lower-case/
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

// static const auto speedup = []() {
// std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0;
// }();
string toLowerCase(string str) {
    for(int i = 0; i < str.size(); i++){
        if((int)str[i] >= 65 && (int)str[i] <= 91 ){ str[i] +=32; }
    }
    return str;
}
int main() {
    SPEED;
    string str = "HelOLoZmPNhLsA";
    cout << toLowerCase(str);
    return 0;
}