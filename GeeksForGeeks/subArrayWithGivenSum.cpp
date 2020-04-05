//! https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
#include<iostream>
#include<vector>
using namespace std;
bool subArraySum(unsigned long, vector<unsigned long>, unsigned int);
int main(){

    unsigned short testCases;
    unsigned int arrSize;
    unsigned long element, targetSum;

    //Pedir inputs, que es, numTestCases, el tamaño del array, que suma quieres llegar y cada elemento.
    cin >> testCases;
    for (unsigned short i = 0; i < testCases; i++)
    {
        vector<unsigned long> arr;
        cin >> arrSize >> targetSum;
        for (auto i = 0; i < arrSize; i++)
        {
            cin>>element;
            arr.push_back(element);
        }
        subArraySum(targetSum,arr, arrSize);
    }
    
    return 0;
}
//Se recibe la suma querida, el array y el tamaño
bool subArraySum(unsigned long targetSum, vector<unsigned long> arr, unsigned int arrSize){
    //La suma empieza en el primer valor
    unsigned long arrSum = arr[0];
    unsigned start = 0;
    //Mientras la suma actual sea menor a la requerida, se le sumara el siguiente termino
    for(auto i = 1; i<=arrSize; i++){
        //Si es mayor a la suma requerida, entonces se le restara el primer valor, y avanza hasta que no sea mayor
        while(arrSum > targetSum && start < i-1){
            arrSum-=arr[start];
            start++;
        }
            //Se comprueba si ya es igual si no se le sigue sumando a la actual el termino que sigue
        if(arrSum == targetSum) { cout << start + 1<< " " << i << endl; return true;} 
        if(i < arrSize){ arrSum+=arr[i]; } 
    }
    
    cout << -1 << endl;
    return false;
}