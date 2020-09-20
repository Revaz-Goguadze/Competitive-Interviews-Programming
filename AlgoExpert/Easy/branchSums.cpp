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

class BinaryTree
{
public:
    int value;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree(int value)
    {
        this->value = value;
        left = NULL;
        right = NULL;
    }
};

vector<int> branchSums(BinaryTree *root)
{
    // Write your code here.
    vector<int> sums;
    branchSumsRec(root, 0, sums);
    return sums;
}

void calculateBranchesInOrder(BinaryTree *current, int currentSum, vector<int> &branchesSum)
{
    if (!current)
    {
        return;
    }

    //Sumar el valor actual
    currentSum += current->value;
    //If I am in a leaf node then add this branch sum to the array,
    if (!current->left && current->right)
    {
        branchesSum.push_back(currentSum);
    }
    //Do the same to every node in the three
    calculateBranchesInOrder(current->left, currentSum, branchesSum);
    calculateBranchesInOrder(current->right, currentSum, branchesSum);
}
int main()
{
    SPEED;

    cout << branchSums() << "\n";

    return 0;
}


