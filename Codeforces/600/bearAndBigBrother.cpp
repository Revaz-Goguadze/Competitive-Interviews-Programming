#include <iostream>

using namespace std;

int main(){
    int a, b, i = 0;
    cin >> a >> b;
    //Solo si a es mayor se detiene
    while(a <= b){
        a *=3;
        b *=2;
        i++;
    }
    printf("%d\n",i);
    return 0;
}