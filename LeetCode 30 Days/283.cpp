//!https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3286/

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
//Solucion space -> O(n) y Time -> O(N)
void moveZeroes(vector<int> &nums)
{
    //Contar el numero de zeros
    int zeros = 0;
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        if (*it == 0)
        {
            zeros++;
        }
    }
    //Si el array tiene numeros que no sean ceros
    if (zeros != nums.size())
    {
        //Se guardaran esos numeros en un vector y se reemplazan sus lugares por 0's
        vector<int> n;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                n.emplace_back(nums[i]);
                nums[i] = 0;
            }
        }
        //Al final se ponen en el mismo orden los numeros guardados
        for (int i = 0; i < n.size(); i++)
        {
            nums[i] = n[i];
        }
    }
}
//Solucion time -> O(N) Space -> O(1)
void moveZeroesBetter(vector<int> &nums)
{
    int zeros = 0;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == 0){ zeros++; break; }
        swap(nums[i], nums[i - zeros]);
    }
}

int main()
{
    SPEED;
    return 0;
}