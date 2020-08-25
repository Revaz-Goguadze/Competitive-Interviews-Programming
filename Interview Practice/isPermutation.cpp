#include <iostream>
#include <unordered_map>

using namespace std;

bool isPermutation(string &str, string &str2);
int main()
{

    string str = "aloha",
           str2 = "holaa";

    if (isPermutation(str, str2))
        cout << "Si es" << endl;
    else
        cout << "No es " << endl;

    return 0;
}

bool isPermutation(string &str, string &str2)
{

    if (str.length() != str2.length())
        return false;

    unordered_map<char, int> mapStr, mapStr2;

    for (int it = 0; i < str.length(); i++)
    {
        mapStr[str[it]]++;
        mapStr2[str2[it]]++;
    }
    for (auto it : str)
    {
        if (mapStr[it] != mapStr2[it])
        {
            return false;
        }
    }
    return true;
}