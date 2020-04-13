//https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3289/
#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
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
#define rep0(i,n) for (i = 0; i < n; ++i) 
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)


int countElements(vector<int>& arr) {
    unordered_set<int> s;
    int res = 0;
    for(int x: arr){ s.insert(x);}
    for(int x: arr){ res+= s.find(x+1) != s.end() ? 1:0;}
    return res;
}

int main() {
    SPEED;
    
    vector<int> vec {1 ,1 ,2};
    cout << countElements(vec);

    return 0;
}