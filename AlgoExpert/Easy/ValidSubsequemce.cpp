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

//My "solution was failing when you had repeated elementys such as arr = {1,1,1} seq ={1,1}"
bool solve(vector<int> arr, vector<int> sequence)
{
    //! Solution 9/10 1 case failed
    // unordered_map<int, int> arrMapping;
    // for (int i = 0; i < sequence.size(); i++)
    // {
    //     arrMapping[sequence[i]] = i;
    // }
    // int order = 0, found = 0;
    // for (int x : arr)
    // {
    //     if (arrMapping.find(x) != arrMapping.end() && arrMapping[x] == order)
    //     {
    //         found++;
    //         order++;
    //     }
    // }
    // return found == arrMapping.size();

    //*First correct solution, using two pointer

    int arrIndex = 0, seqIndex = 0;

    while (arrIndex < arr.size() && seqIndex != sequence.size())
    {
        //Whe are moving two pointers independent, if we found a sequence number then we move on the sequence if not we move on the array to the next one
        if (arr[arrIndex] == sequence[seqIndex])
            seqIndex++;
        arrIndex++;
    }

    return seqIndex == sequence.size();
}

int main()
{
    SPEED;

    cout << solve({1, 1, 1, 1, 1}, {1, 1}) << "\n";

    return 0;
}