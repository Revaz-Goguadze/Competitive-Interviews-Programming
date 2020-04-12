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


int solve(){

    string s;
    cin >> s;
    int res = 0, pointer = 0;
    //Vamos a elegir el movimiento minimo entre donde estamos hasta la que queremos llegar, por la derecha e izquierda
    rep(i,0,s.size()-1){
        int cur = ((int)s[i] - 97);
        res+= min(abs(cur - pointer), 26- abs(cur - pointer));
        pointer = cur;
    }
    
    return res;
}
int main() {
    SPEED;
        cout << solve() << "\n";
    return 0;
}