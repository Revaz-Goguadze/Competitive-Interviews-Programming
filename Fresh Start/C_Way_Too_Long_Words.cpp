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

string solve(string s)
{

    if (s.size() <= 10)
    {
        return s;
    }

    return s[0] + to_string(s.size()-2) + s[s.size() - 1];
}

int main()
{
    SPEED;
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;

        cout << solve(s) << "\n";
    }

    return 0;
}