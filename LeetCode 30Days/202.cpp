//!https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3284/
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
bool isHappy(int);
int toSumOfSquares(int n);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << isHappy(n) << endl;
    return 0;
}
//Solucion tipica con O(n) espacio y Space (N^2)
/*bool isHappy(int n){
    unordered_set<int> prevRes;
    while(n!=1){
        int res = 0, 
            tempN = n;
        //Hacer la suma de los cuadrados
        while(tempN!=0){ 
            res+= (tempN%10) * (tempN%10);
            tempN/=0;
        }
        if(prevRes.find(res) != prevRes.end()) {  return false;}
        prevRes.insert(res);
        n = res;
    }
    return true;
}
*/
//Solucion Space O(N) Time O(logN)
bool isHappy(int n){
    cout << n << endl;
    if (n == 1) return true;
    //Se termina en 4 ya que cualquier unhappy number pasara por el 4 
    else if (n == 4) return false;
    else return isHappy(toSumOfSquares(n));
}

//Sumar el numero elevado al cuadrado
int toSumOfSquares(int n){
    int sum = 0;
    while(n!=0){
        sum+= (n%10)*(n%10);
        n/=10;
    }
    return sum;
}
