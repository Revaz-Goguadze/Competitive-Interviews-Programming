#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include<unordered_map>
#include <algorithm>
using namespace std;


int chooseNumber(vector<int>, vector<int>);
int main(){
    vector<int> a,b;
    int aLen,bLen,num;
    cin >> aLen;
    for(int i = 0; i < aLen; i++){
        cin >> num;
        a.push_back(num);
    }
    cin >> bLen;
    for(int i = 0; i < bLen; i++){
        cin >> num;
        b.push_back(num);
    }

    chooseNumber(a,b);


    return 0;
}

int chooseNumber(vector<int> a, vector<int>b) {

    cout << *max_element(a.begin(),a.end()) << " " <<  *max_element(b.begin(),b.end());
}