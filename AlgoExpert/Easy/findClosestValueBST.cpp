#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define SPEED                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
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
#define rep0(i, n) for (i = 0; i < n; ++i)
#define rep(i, j, n) for (ll i = j; i <= n; i++)
#define per(i, j, n) for (ll i = j; i >= n; i--)

class BST
{
public:
    int value;
    BST *left;
    BST *right;

    BST(int val);
    BST &insert(int val);
};

//Average time O(logn) space O(1)
//Worst time O(n) space O(1)
int findClosestValueInBst(BST *tree, int target)
{
    BST *current = tree;
    int minDiff = INT_MAX, closest = -1;
    while (current != NULL)
    {
        //If found the same value then return that node
        if (current->value == target)
        {
            return current->value;
        }
        //Get the current difference between the target and the current node value
        int currenDiff = abs(current->value - target);
        //If that difference is less than the minimum difference so far then make the current diff the minimum
        closest = currenDiff < minDiff ? current->value : closest;
        minDiff = currenDiff < minDiff ? currenDiff : minDiff;
        //Move current depending on the target value
        current = current->value < target ? current->right : current->left;
    }
    return closest;
}

int main()
{
    SPEED;

    cout << findClosestValueInBst() << "\n";

    return 0;
}