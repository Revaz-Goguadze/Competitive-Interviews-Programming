#include <iostream>
#include<set>
#include<map>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

int secondBiggest(vector<int>&arr);
int main()
{
    vector<int> arr {9,9,9,9,9,8};

    cout << secondBiggest(arr) << endl;

    return 0;
}

int secondBiggest(vector<int>&arr){
    int max1 = arr[0],
        max2 = INT8_MIN;
    for(int it: arr){
        if(it > max1){
            max2 = max1;
            max1 = it;
        }
        else if(it > max2 && it != max1){
            max2 = it;
        }
    }
    return max2 == INT8_MIN ? 0:max2;
}
