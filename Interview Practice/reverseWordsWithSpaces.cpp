#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string frase);
vector<string> invertirVector(vector<string> palabras);
void imprimirVector(vector<string>vec);
int main(){

    string frase = "Hola como estas";
    vector<string>palabras = split(frase);
    vector<string>palabrasInvertidas = invertirVector(palabras);
    imprimirVector(palabrasInvertidas);

    return 0;
}

vector<string> split(string frase){
    vector<string> palabras;
    int start = 0, numChar = 0, i = 0;
    for(i; i < frase.length(); i++){
        if(frase[i] == ' '){
            palabras.push_back(frase.substr(start,numChar));
            start = i + 1;
            numChar = 0;
        }
        numChar++;
    }
    palabras.push_back(frase.substr(start,numChar));
    return palabras;
}

vector<string> invertirVector(vector<string> palabras){
    for(int i = 0; i < palabras.size() / 2; i++){
        swap(palabras[i], palabras[palabras.size() - i - 1]);
    }
    return palabras;
}

void imprimirVector(vector<string> vec){
    for(string it: vec) cout << it << " ";
}