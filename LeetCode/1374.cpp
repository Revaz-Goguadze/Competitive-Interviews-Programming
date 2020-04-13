//!https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

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


string generateTheString(int n) {
    //Add the same letter and if is even just remove and add other letter
    string res = "";
    for(int i = 0; i<n; i++){
        res+='a';
    }
    if(n%2== 0){ res.pop_back(); res+='b';}
    return res;
}
int main() {
    SPEED;
    int n;
    cin >> n;
    cout << generateTheString(n)<< "\n";
    return 0;
}