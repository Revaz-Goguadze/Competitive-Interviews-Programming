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

string solve(int n, vector<bool> &seen)
{

    

    for (auto flag : seen)
    {

        if (!flag)
        {
            return "Oh, my keyboard!";
        }
    }

    return "I become the guy.";
}

int main()
{
    SPEED;
   
    vector<bool> seen(n, false);
    int n, x;
    cin >> n;
    int p;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        cin >> x;
        seen[x - 1] = true;
    }
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> x;
        seen[x - 1] = true;
    }

    cout << solve(n, seen);

    return 0;
}