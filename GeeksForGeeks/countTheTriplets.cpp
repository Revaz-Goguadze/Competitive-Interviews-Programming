//https://practice.geeksforgeeks.org/problems/count-the-triplets/0

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int countTriplets(vector<int> &arr, int &size);
int main()
{
    static int __=[](){std::ios::sync_with_stdio(false);return 0;}();

    int testCases, arrSize, element;
    cin >> testCases;
    for (auto i = 0; i < testCases; i++){
        vector<int> arr;
        cin >> arrSize;
        for(auto j = 0; j < arrSize; j++){
            cin >> element;
            arr.push_back(element);
        }
        
        cout << countTriplets(arr, arrSize) << endl;
    }

    return 0;
}
int countTriplets(vector<int>& arr, int& size){
    
}
