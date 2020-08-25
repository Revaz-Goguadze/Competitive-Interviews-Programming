#include <iostream>
using namespace std;

int main(){

    int n, cont = 1;
    cin >> n;
    int matr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matr[i][j] = cont++;
        }
    }

    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            temp = matr[i][j];
            matr[i][j] = matr[j][i];
            matr[j][i] = temp;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n/2; j++){
            temp = matr[i][j];
            matr[i][j] = matr[j][n-j-1];
            matr[j][n-j-1] = temp;
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matr[i][j];
        }
        cout << endl;
    }

    return 0;
}