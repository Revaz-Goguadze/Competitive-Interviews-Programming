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

int binarySearch(vector<int> array, int target)
{

    int low = 0, high = array.size() - 1;
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (array[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] > target)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    return -1;
}

int main()
{
    SPEED;

    cout << binarySearch({0, 1, 21, 33, 45, 45, 61, 71, 72, 73}, 73) << "\n";

    return 0;
}