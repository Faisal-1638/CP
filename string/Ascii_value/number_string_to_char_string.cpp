#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin >> s;//123456
    
      for(int i = 0; i < s.size(); i++)
      {
        int num = s[i] - '0';
        char ch = 'a' + num - 1;
        cout << ch;   
      }
      
}