// A. Ehab and another construction problem
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given an integer x, find 2 integers a and b such that:

// 1≤a,b≤x
// b divides a (a is divisible by b).
// a⋅b>x.
// ab<x.
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;

//     cin >> n;

//     for(int i= 1; i<=n; i++)
//     {
//         for(int j=1; j<=n; j++)
//         {
//             if(i * j > n && i % j == 0 && i / j < n)
//             {
//                 cout << i << " " << j;
//                 return 0;
//             }
//         }
//     }

//     cout << "-1" << endl;

//     return 0;
// }

#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    ll x;
    cin >> x;
    if (x == 1)
        puts("-1");
    else
        cout << x << " " << x << endl;
    return 0;
}