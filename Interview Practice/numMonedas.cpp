#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> monedas{2,5,7};
    int k = 10;
    int residuo, m50,m35,m15,m10,m5;
    int suma = 0;
    // while(suma != k){

    // }

    int n = monedas.size() - 1;
    m50 = k / monedas[n];
    residuo = k % monedas[n];

    m35 = residuo / monedas[n - 1];
    residuo = k % monedas[n - 1];

    m15 = residuo / monedas[n - 2];
    residuo = k % monedas[n - 2];

    m10 = residuo / monedas[n - 3];
    residuo = k % monedas[n - 3];

    m5 = residuo / monedas[n - 4];
    residuo = residuo % monedas[n - 4];


    printf("%d -> 50, %d -> 35, %d -> 15, %d -> 10, %d -> 5, %d -> 1", m50,m35,m15,m10,m5,residuo);



    return 0;
}