#include <iostream>
#include <set>
#include <algorithm>

using namespace std;


bool isInRange(){
    set< pair<int, int> >s;

    //* {a,b} is smaller if (a < b) or (a == b and c < b)
    s.insert({2, 3});
    s.insert({10, 20});
    s.insert({30, 400});
    s.insert({401, 450});

    int point = 50;
}
int main()
{

    return 0;
}
