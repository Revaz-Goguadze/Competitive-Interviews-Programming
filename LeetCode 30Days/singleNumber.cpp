//!https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3283/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int singleNumber(vector<int> &nums);
int singleNumber2(vector<int> &nums);
int main()
{
    static int __=[](){std::ios::sync_with_stdio(false);return 0;}();

    int n, element;
    vector<int> nums;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        cin >> element;
        nums.push_back(element);
    }
    cout << singleNumber(nums) << endl;

    return 0;
}
//! Solucion Time O(n) Space O(1)
int singleNumber(vector<int> &nums)
{
    //Get first elements
    int res = nums[0];
    /*  For every element we are doing an XOR
    *   We know that:
    *   a) XOR of a number with itself is 0.
    *   b) XOR of a number with 0 is number itself.
    */
    for (int i = 1; i < nums.size(); i++){  nums[0] ^=nums[i];  } return nums[0];
}
//Solucion Time O(n) Space O(n)
int singleNumber2(vector<int> nums){
    unordered_map<int,int> myMap;
    for(auto i: nums){ myMap[i]++;  }
    for(auto i: nums) { if(myMap[i] == 1) return i; }
    return -1;
}