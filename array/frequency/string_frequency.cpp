#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;

    for(int c : s)
    {
        mp[c]++;
    }

    for(auto p: mp)
    {
        cout << p.first << p.second;
    }
}