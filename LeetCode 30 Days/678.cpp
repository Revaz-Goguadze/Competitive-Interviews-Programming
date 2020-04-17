//!https://leetcode.com/problems/valid-parenthesis-string/
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


bool checkValidString(string s) {
    stack<int> open,ast;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ')')
        {
            if(!open.empty()) open.pop();
            else if(!ast.empty()) ast.pop();
            else return false;
        }
        else if(s[i] == '(')   open.push(i);
        else ast.push(i);
    }
    while(!open.empty() && !ast.empty())
    {
        if(open.top() > ast.top()) return false;
        open.pop();
        ast.pop();
    }
    return open.empty();
}
int main() {
    SPEED;
    string s = "(*))";
    checkValidString(s);
    return 0;
}