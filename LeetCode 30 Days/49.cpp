//!https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3288/
#include <bits/stdc++.h>
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

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> res;
    vector<string> tmp;
    unordered_map<string,vector<string>> map;
    for(auto it = strs.begin(); it != strs.end(); it++){
        string x = *it; 
        sort(x.begin(),x.end());
        if(map.find(x) ==  map.end()){ map[x] = tmp; }
        map[x].emplace_back(*it);
    }
     for(auto i: map){
        res.emplace_back(i.second);       
    }
    return res;

}

int main() {
    SPEED;
    vector<string> vec {"eat", "tea", "tan", "ate", "nat", "bat"};
    groupAnagrams(vec);
    return 0;
}