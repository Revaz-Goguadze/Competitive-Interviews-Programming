// A. Phone Numbers
// time limit per test2 seconds
// memory limit per test512 megabytes
// inputstandard input
// outputstandard output
// Let's call a string a phone number if it has length 11 and fits the pattern "8xxxxxxxxxx", where each "x" is replaced by a digit.

// For example, "80123456789" and "80000000000" are phone numbers, while "8012345678" and "79000000000" are not.

// You have n cards with digits, and you want to use them to make as many phone numbers as possible. Each card must be used in at most one phone number, and you don't have to use all cards. The phone numbers do not necessarily have to be distinct.
#include <iostream>
using namespace std;
int main(){
    

    int n, cont = 0;
    string s;
    cin >> n;
    cin >> s;
    if(n >= 11){
        for(int i = 0; i < n; i++){
            if(s[i] == '8')cont++;
        }
        if(cont == 0)cout << 0 << endl;
        else if(cont == 1) cout << 1 << endl;
        else{
            if(cont >= (n/11))cout << n/11 << endl;
            else cout << ((n / 11) - ((n/11) - cont)) << endl;
        }    
    } 
    else cout << 0 << endl;
    return 0;
}