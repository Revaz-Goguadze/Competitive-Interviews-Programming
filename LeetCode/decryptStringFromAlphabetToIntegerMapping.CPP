#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define INF 1e18
#define eps 0.00001
#define le length
#define debug(n1) cout << n1 << endl
#define rep0(i,n) for (i = 0; i < n; ++i) 
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)

//static int __=[](){std::ios::sync_with_stdio(false);return 0;}();

string freqAlphabets(string s) {

//Start transevring from right to left
string res = "";
auto it = s.end()--;

while(it >= s.begin()){
    //If it's different from # add 48 to the ascii code
    if(*it != '#'){
        res+= (int) *it + 48;
    }else{
            /*we add the next two numbers by going down in the iterator
            *we add it as a string an then reverse it and then to int and sum  96 to it's ascii code
            */ 
        string aux = "";
        it--;
        aux+=*it;
        it--;
        aux+=*it;
        reverse(aux.begin(),aux.end());
        int num = stoi(aux);
        res+= num+96;
    }
    it--;
}  

//Reverse the string and remove the "/0";
reverse(res.begin(),res.end());
res.pop_back();
return res;
}
int main() {
    SPEED;
    string s;
    cin >> s;
    cout << freqAlphabets(s);
    return 0;
}