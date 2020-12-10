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

string solve(vector<pair<int, int>> &dragStats, int strength)
{

    for (auto stats : dragStats)
    {
        int life = stats.first, bonus = stats.second;
        if (strength > life)
        {
            strength += bonus;
        }
        else
        {
            return "NO";
        }
    }

    return "YES";
}

int main()
{
    SPEED;
    int strength, nDrag, life, bonus;
    cin >> strength >> nDrag;
    vector<pair<int, int>> dragStats(nDrag);

    while (nDrag--)
    {
        cin >> life >> bonus;
        dragStats.eb(mp(life, bonus));
    }

    sort(dragStats.begin(), dragStats.end());

    cout << solve(dragStats, strength) << "\n";

    return 0;
}