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

string solve(vector<char> arr)
{
    int count = 0;
    for (char x : arr)
    {
        if (x == 'A')
            count++;
    }
    if ((arr.size() - count) > count)
    {
        return "Danik";
    }
    else if ((arr.size() - count) < count)
    {
        return "Anton";
    }
    else
    {
        return "Friendship";
    }
}
int main()
{
    SPEED;

    int n;
    char x;
    cin >> n;
    vector<char> arr;
    while (n--)
    {
        cin >> x;
        arr.pb(x);
    }

    cout << solve(arr) << endl;
    return 0;
}