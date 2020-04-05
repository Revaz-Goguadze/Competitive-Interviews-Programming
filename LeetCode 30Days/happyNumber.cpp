//!https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3284/
#include<iostream>
#include<unordered_set>
using namespace std;
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
