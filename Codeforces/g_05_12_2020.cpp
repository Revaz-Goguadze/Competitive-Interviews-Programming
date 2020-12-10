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

int solve(vector<vector<int>> arr, int n)
{
    vector<int> dp(n);

    for (int i = 0; i < n; i++)
    {
        dp[i] = arr[i][0];
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1][1] + i - 1 == i)
        {
            cout << "si" << endl;
            dp[i] = max(dp[i], dp[i] + dp[i - 1]);
        }
        if (arr[i - 1][2] + i - 1 == i)
        {

            dp[i] = max(dp[i], dp[i] + dp[i - 1]);
        }
    }

    return dp[n - 1];
}

int main()
{
    SPEED;

    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    // }

    cout << solve(arr, n) << "\n";

    return 0;
}