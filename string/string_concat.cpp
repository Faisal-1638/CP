#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1 = "";

    for(int i= 0; i < n; i++)
    {
        string s;
        cin >> s;
        int len = s.size();
        s1 = s1 + s[len-1];
    }

    for(char x : s1)
    {
        cout << x ;
    }
}