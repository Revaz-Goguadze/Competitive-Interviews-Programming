//!https://leetcode.com/problems/two-sum/
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


vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> diff;
    //Safe how much the number needs to arrive to target with his index
    for(int i = 0; i <nums.size(); i++){
        diff[target - nums[i]] = i; 
    }
    //si se encuentra el numero necesario para llegar al target y no es el mismo se regresan los index
    for(int i = 0; i <nums.size(); i++){
        if(diff.find(nums[i]) != diff.end() && diff[nums[i]] != i){
            return {i,diff[nums[i]]};
        }
    }
    return {-1,-1};
}
int main() {
    SPEED;
    vector<int> nums {2, 7, 11, 15};
    int target = 9;
    for(auto x: twoSum(nums,target)){
        cout << x << " ";
    }
    return 0;
}