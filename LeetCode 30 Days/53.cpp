//!https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3285/
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
int maxSubArray(vector<int>& nums) {
    if(nums.size() <= 2) { 
        auto is_negative =[](auto n) { return n<1; };
        if(any_of(nums.begin(),nums.end(), is_negative)){
            return  *max_element(nums.begin(), nums.end());
        }else{
            return accumulate(nums.begin(),nums.end(),0);
        }  
    } 
    auto it = ++nums.begin();
    int maxSum = nums[0], currentSum = maxSum;
    while(it!=nums.end()){
        currentSum = max(*it, currentSum + *it);
        maxSum = max(currentSum, maxSum);
        ++it;
    }
    return maxSum;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> nums;
    int size, element;
    cin >> size;
    while(size--){
        cin >> element;
        nums.push_back(element);
    }

    cout << maxSubArray(nums);
    

    return 0;
}