#include<iostream>
using namespace std;
bool palindrom(string &S)
{
 int len = S.size();
 for(int i = 0; i < len / 2; i++)
{

  if(S[i] != S[len-i-1])

     return false;
 }
 return true;
}
int main()
{
    string S;
    cin >> S;
    
    if(palindrom(S))
      cout<< "YES\n";
     else
        cout<< "NO\n";



    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string temp = s;

    reverse(temp.begin(), temp.end());

    if (s == temp)
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}
*/