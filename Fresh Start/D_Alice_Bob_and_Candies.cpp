#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define SPEED                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
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
#define rep0(i, n) for (i = 0; i < n; ++i)
#define rep(i, j, n) for (ll i = j; i <= n; i++)
#define per(i, j, n) for (ll i = j; i >= n; i--)

int solve(vector<int> candies)
{
    int left = 0, right = candies.size() - 1;
    int contLeft, contRight = 0;
    int moves = 0;
    while (left < right)
    {
        if (contLeft <= contRight)
        {
        }
    }

    return 0;
}

int main()
{
    SPEED;

    int t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> candies(n);
        for (int i = 0; i < n; i++)
        {
            cin >> candies[i];
        }
        solve(candies);
    }

    return 0;
}