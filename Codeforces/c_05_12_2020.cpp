#include <bits/stdc++.h>
#include <iostream>
using namespace std;
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

unsigned long long int solve(unsigned long long int n, unsigned long long int k)
{
    unsigned long long int nPlusOne, kPLusOne, kPLusTwo, nPlusTwo, res;
    nPlusOne = (n + 1) % 1000000007;
    nPlusTwo = (n + 2) % 1000000007;
    kPLusOne = (k + 1) % 1000000007;
    res = (nPlusOne * nPlusTwo) % 1000000007;
    res = (res * kPLusOne) % 1000000007;
    return ceil(res / 2);

    //(n + 1)(n + 2)(k + 1) / 2
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        unsigned long long int n, k;
        cin >> n >> k;

        cout << solve(n, k) << "\n";
    }

    return 0;
}