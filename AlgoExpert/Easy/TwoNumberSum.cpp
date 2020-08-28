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


//First and AC solution O(n) space and time Solved on 13m:20s (Solved before)
vector<int> twoNumberSum(vector<int> array, int target)
{
    unordered_map<int, int> targetMapping;
    for (int x : array)
    {
        targetMapping[target - x] = x;
        if (targetMapping.find(x) != targetMapping.end() && targetMapping[x]!=x)
        {
            return { x, targetMapping[x] };
        }
    }
    return {};

    /* Improvements
    * Using set instead of map, we only need previous number and current one
    * if (set.find(target - x) != set.end()), in this case we ensure not habing duplicates because of set properties
    */

}
int main()
{

    
    vector<int> arr {3,5,-4,8,11,1,-1,6};
    vector<int> ans = twoNumberSum(arr,10);

    for(int x: ans){
        cout<< x<< ", ";
    }

    SPEED;
    return 0;
}