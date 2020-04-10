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


ll solve(){

    int n;
    ll x;
    ll a;
    vector<ll> v;
    cin >> n >> x;
    while(n--){
        cin >> a;
        v.eb(a);
    }
    if(v.size() == 1 && v[0] < x){ return 0;}
    if(v.size() == 1 && v[0] >= x){ return 1;}
    int count = 0;
    ll sum = 0;
    sort(v.begin(), v.end());
    for(int i = v.size()-1; i>=0; i--){
        sum +=v[i];
        count++;
        if(sum/count < x){ return count -1; }
    }
    return count;

}
int main() {
    SPEED;
    int t;
    cin >> t;
    while(t--)
        cout<< solve() <<"\n";
    return 0;
}




