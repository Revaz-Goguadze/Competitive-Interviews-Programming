//!https://leetcode.com/problems/valid-parentheses/
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


bool isValid(string s) {
    stack<char> sta;
    unordered_set<char> closing{']','}',')'};
    for(auto x: s){
            /**if the character is closing and the tack is not empty we check the  top element and if is not the inverse 
            * of the character we return false
            * else we add the opnening character and at the end, the stack need to remain empty to be balanced
            */ 
        if(closing.find(x) != closing.end() && !sta.empty()){
            char top = sta.top();
            if(top == '(' && x !=')'){ return false; }
            if(top == '{' && x !='}'){ return false; }
            if(top == '[' && x !=']'){ return false; }
            sta.pop();
        }else{
           sta.push(x); 
        }
    }
    return sta.empty();
}
int main() {
    string s;
    cin >> s;
    cout << isValid(s);
    return 0;
}