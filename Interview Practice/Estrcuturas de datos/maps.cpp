#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

bool isSumPossible(vector<int>arr, int sumPair){
    map<int, int>A;
    for(int i: arr){
        A[sumPair - i] = i;
        if(A.find(i) != A.end()){
            return true;
        }
    }
    return false;
}
int main(){

    // vector<int>arr;
    // int arrLen, sumPair,numArr;
    // cin >> arrLen >> sumPair;
    // for(int i = 0; i < arrLen; i++){
    //     cin >> numArr;
    //     arr.push_back(numArr);
    // }

    // if(isSumPossible(arr,sumPair)) { cout << "The sum was posible" << endl; }
    // else { cout << "The sum is not possible" << endl; }







    map<char, int> myMap;


    string wea = "alaaaa";


    set<int> mySet;

    vector<int> myVector {1,2,3,4,4,4,4,4,5,6,7,7,8,8};

    for(int it: myVector){
        mySet.insert(it);
    }
    for(int it: mySet){
        cout << it << " -> ";
    }
    cout << endl;



    cout << myMap['a'] << endl;




    return 0;
}