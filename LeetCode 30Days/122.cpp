//!https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3287/
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

//Solucion Time -> O(N) time -> O(1)
//?https://leetcode.com/problems/best-time-to-buy-and-sell-stock-II/solution/
/*Basicamente si estamos en un valle es decir en un valor bajo, y el que sigue es una montaña,
* es decir un valor mayor se vende, entonces el profitMax es la suma de todo
*/

int maxProfit(vector<int>& prices) {
    int res = 0;
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1]){  res += prices[i] - prices[i - 1];  }
    }
    return res;  
}
int main() {
    SPEED;
    vector<int> arr {7,1,5,3,6,4};
    cout << maxProfit(arr) << "\n";

    return 0;
}