//https://codeforces.com/contest/381/problem/A
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


void solve(){
    int n, ele;
    vector<int>v;
    cin >> n;
    for(int j = 0;  j < n; j++){
        cin >> ele;
        v.eb(ele);
    }
    int i = 1, a= 0, b= 0,down = 0,  high = v.size()-1;
    while(down <=high){
        if(v[high] > v[down]){
            if(i%2==0){ b+=v[high];}
            else a+=v[high];
            high--;
        }else{
            if(i%2==0){ b+=v[down];}
            else a+=v[down];
            down++;
        }
        i++;
    }

    cout <<  a << " " << b; 
    cout <<"\n";
}
int main() {
    SPEED;
    solve();
    return 0;
}