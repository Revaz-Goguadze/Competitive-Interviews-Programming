#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>arr{1,2,3};
    vector<int>arr1{0,2,3};
    vector<int>mergedArr;
    for(int i = 0; i <arr1.size(); i++){
        if(*min_element(arr.begin(),arr.end()) < *min_element(arr1.begin(),arr1.end())){
            mergedArr.push_back(*min_element(arr.begin(),arr.end()))

        }
    }

    return 0;
}
