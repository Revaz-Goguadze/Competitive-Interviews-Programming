#include <bits/stdc++.h>
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

int solve(vector<int> arr, int hFence)
{
    int res = arr.size();
    for (int x : arr)
    {
        if (x > hFence)
            res++;
    }
    return res;
}

int main()
{
    SPEED;

    int nFriends, hFence, x;
    vector<int> arr;
    cin >> nFriends >> hFence;
    while (nFriends--)
    {
        cin >> x;
        arr.pb(x);
    }
    cout << solve(arr, hFence) << endl;
    return 0;
}