//!https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3300/
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


vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> suff(nums.size());
    vector<int>ans(nums.size());
    ans[0] = 1;
    for(int i = 1; i < nums.size(); i++){
        ans[i] = ans[i-1]*nums[i-1];
    }
    suff[nums.size()-1] = 1;
    for(int i = nums.size() - 2; i >=0; i--){
        suff[i] = suff[i+1]*nums[i+1];
    }
    for(int i = 0; i < nums.size(); i++){
        ans[i]*= suff[i];
    }
    return ans;
}
int main() {
    SPEED;
    vector<int> datos{1,2,3,4};
    for(auto x: productExceptSelf(datos)){
        cout << x << " ";
    }
    return 0;
}