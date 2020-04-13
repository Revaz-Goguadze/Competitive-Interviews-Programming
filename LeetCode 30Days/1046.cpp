//!https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3297/
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


int lastStoneWeight(vector<int>& stones) {

    priority_queue<int> priQue;

    //Crear la priority queue 
    for(auto x: stones){
        priQue.emplace(x);
    }

    //Mientras sea mayor a uno se sacaran los dos más grandes y si son diferentes entonces se agrega la diferencia
    while(priQue.size() > 1){
        int firstStone = priQue.top(); priQue.pop();
        int secondStone = priQue.top(); priQue.pop();
        if(firstStone != secondStone){
            priQue.emplace(firstStone -secondStone);
        }
    }
    //Se regresa el elemento restante o si esta vacia 
    return priQue.empty() ? 0: priQue.top();
}
int main() {
    SPEED;
    vector<int> v{2,7,4,1,8,1};
    cout << lastStoneWeight(v);
    return 0;
}