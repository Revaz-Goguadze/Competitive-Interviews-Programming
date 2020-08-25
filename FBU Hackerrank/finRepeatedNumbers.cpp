#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;


vector<int> RepeatedNumbers(vector<int> a) {
    unordered_set<int>s;
    vector<int> newA;
    for(int i: a){
        if(s.find(i) == s.end()) s.insert(i);
        else newA.push_back(i);
    }
    return newA;
}

int main(){


    return 0;
}