#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int subsetSum(list<unsigned long long int> l)
{
    unsigned long long int sum = 0;
    for (list<unsigned long long int>::iterator it = l.begin(); it != l.end(); ++it)
        sum += *it;
    return sum;
}

void subset(vector<unsigned long long int> &cajas, int left, int index, list<unsigned long long int> &l, unsigned long long int &min, unsigned long long int &max, unsigned long long int &res)
{
    if (left == 0)
    {
        if (subsetSum(l) >= min && subsetSum(l) <= max)
        {
            res++;
        };
        return;
    }
    for (int i = index; i < cajas.size(); i++)
    {
        l.push_back(cajas[i]);
        subset(cajas, left - 1, i + 1, l, min, max, res);
        l.pop_back();
    }
}

int main()
{

    int nCajas, kTotal;
    cin >> nCajas >> kTotal;

    vector<unsigned long long int> cajas(nCajas);

    for (int i = 0; i < nCajas; i++)
    {
        cin >> cajas[i];
    }

    unsigned long long int min, max, res = 0;

    cin >> min >> max;
    list<unsigned long long int> lt;

    subset(cajas, kTotal, 0, lt, min, max, res);

    cout << res;
    return 0;
}