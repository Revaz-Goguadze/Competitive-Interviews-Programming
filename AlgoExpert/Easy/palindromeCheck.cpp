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


//Best solution O(n), assuming no spaces, special characters and more
bool isPalindrome(string str)
{

    int left = 0, right = str.size() - 1;
    while (left <= right)
    {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main()
{
    SPEED;

    string t;
    cin >> t;

    cout << isPalindrome(t) << "\n";

    return 0;
}