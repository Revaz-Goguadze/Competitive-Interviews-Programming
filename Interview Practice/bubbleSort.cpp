#include<iostream>
#include<vector>
using namespace std;

void ordenarArr(vector<int> &arr);
int main(){

    vector<int> arr  = {3,6,5,3,2,1,8};
    ordenarArr(arr);
    for(auto it: arr) cout << it << "->";

    return 0;
}

void ordenarArr(vector<int> &arr){
    for(int i = 0; i<=arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}