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

void reverseString(vector<char> &s)
{

    for (int i = 0; i < s.size() / 2; i++)
    {
        char tmp = s[i];
        s[i] = s[s.size() - i - 1];
        s[s.size() - i - 1] = tmp;
    }
}

int main()
{
    SPEED;
    vector<char> s{'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    for (char c : s)
    {
        cout << c;
    }

    return 0;
}