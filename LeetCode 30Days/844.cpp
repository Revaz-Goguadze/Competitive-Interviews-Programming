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

/**
 * Solucion Espacio -> O(n), espacio -> O(1)
 * 
 */ 
bool solve(){
    string s = "ab#c", t="ab#cc";
    stack<char> staS;
    stack<char> staT;
    for(auto x: s){
        if(x != '#'){
            staS.push(x);
        }else if(staS.size() != 0){ 
            staS.pop(); 
        }
    }
    for(auto x: t){
        if(x != '#'){
            staT.push(x);
        }else if(staT.size() != 0){ 
            staT.pop(); 
        }
    }
    if(staS.size() != staT.size() ){ return false; }
    while(staS.size() != 0){
        if(staS.top() != staT.top()){ return false; }
        staS.pop();
        staT.pop();
    }
    return true;
}

//Solucion Espacio -> O(1) Time -> O(n)
bool solve2(){
    string s = "ab#c", t="ab#cc";
    int index = 0;
    for(char x: s){
        if(x != '#' ){
            s[index] = x;
            index++;
        }else{
            index = max(index - 1, 0);
        }
    }
    
    int index2 = 0;
    for(char c: t){
        if(c != '#' ){
            t[index2] = x;
            index2++;
        }else{
            index2 = max(index2 - 1, 0);
        }
    }
    
    return s.substr(0, index) == t.substr(0, index2);
}
int main() {
    SPEED;

    cout << solve();
    return 0;
}