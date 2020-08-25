//    A. Mishka and Contest
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Mishka started participating in a programming contest. There are n problems in the contest. Mishka's problem-solving skill is equal to k.

// Mishka arranges all problems from the contest into a list. Because of his weird principles, Mishka only solves problems from one of the ends of the list. Every time, he chooses which end (left or right) he will solve the next problem from. Thus, each problem Mishka solves is either the leftmost or the rightmost problem in the list.

// Mishka cannot solve a problem with difficulty greater than k. When Mishka solves the problem, it disappears from the list, so the length of the list decreases by 1. Mishka stops when he is unable to solve any problem from any end of the list.

// How many problems can Mishka solve? 
#include <iostream>
using namespace std;
int cont = 0;
string left_start();
void rightStart(int arr[], int n);
int main(){

    int n, max;
    cin >> n >> max;
    int arr[n];
    for(int i = 0; i < n; i ++)cin >> arr[i];
    cout << left_start() << endl;
    return 0;
}
string lef_start(){
    cout  << "hello" << endl;
}
