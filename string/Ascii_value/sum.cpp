#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s = "abc";

    int sum = 0;

    for(char ch : s)
    {
        sum += ch;
    }

    cout << sum;
return 0;

}