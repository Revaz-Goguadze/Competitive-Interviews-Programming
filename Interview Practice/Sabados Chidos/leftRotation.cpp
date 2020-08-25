#include <iostream>

using namespace std;



int main(){

    int arrLen, numRotations, num, temp;

    cin >> arrLen >> numRotations;


    int arr[arrLen];

    for(int i = 0; i < arrLen; i++){
        cin >> num;
        arr[i] = num;
    }


    for(int i = 0; i < arrLen - 1; i++){
        temp = arr[0];
        arr[0] = NULL;
        arr[i] = arr[i + 1];
        arr[arrLen -1] = temp;
    }

    for(int i = 0; i < arrLen; i++){
        cout << arr[i] << " " << endl;
    }





    /* Para hacer una rotacion de un array se necesita:
        1) Guardar el primer elemento en una variable temporal
        2)recorrer array en uno
        3) remplazar el ultimo elemento
    */

    return 0;
}
