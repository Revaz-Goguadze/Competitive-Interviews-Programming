//!https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++. h>
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


int maxProfit(vector<int>& prices) {
    int maxProfit(vector<int>& prices) {
    int minValley = INT_MAX, res = 0;
    auto it = prices.begin();
    while(it != prices.end()) {
        minValley = min(minValley, *it);
        res = max(*it-minValley,res);
        ++it;
    }
    return res;
}
}

int main() {
    SPEED;
    vector

    return 0;
}