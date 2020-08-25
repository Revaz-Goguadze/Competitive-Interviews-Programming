#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

vector<int> SmallestDictionaryOrderedArray(vector<int> a, vector<int> b) {
    if(a.empty()) { return a;}
    else if(b.empty()) { return b; }
    if(a.size() == b.size()){
        for(int i = 0; i<a.size(); i++){
            if(a[i] < b[i]) return a;
            else if(b[i] < a[i]) return b;
        }
    }
    if(a.size() != b.size()){
        if(a.size() < b.size()){
            for(int i = 0; i < a.size(); i++){
                if(a[i] < b[i]) return a;
                else if(b[i] < a[i]) return b;
            }
            return a;
        }
        else{
            for(int i = 0; i < b.size(); i++){
                if(a[i] < b[i]) return a;
                else if(b[i] < a[i]) return b;
            }
            return b;
        }
    }
}

int main(){

    vector<int> a {4,0,-5};
    vector<int> a1 {5};

    for(auto i: SmallestDictionaryOrderedArray(a,a1)){
        cout << i << " ";
    }


    return 0;
}