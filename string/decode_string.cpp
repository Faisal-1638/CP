#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int q;
    cin >> q;
    while (q--) 
    {
      int n;
      cin >> n;
      string t;
      cin >> t;

      string ans = "";

      for(int i = t.size() - 1; i >= 0; i--)
      {
        if(t[i] == '0')
        {
          string x = "";
          x += t[i - 2];
          x += t[i - 1];
          int num = stoi(x);
          // int num = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');// instead of previous two line
          ans += char('a' + num - 1);
           i = i - 2;
        }

        else 
        {
          int num = t[i] - '0';
             ans += char('a' + num - 1);
        }
 
      }

      for(int i = ans.size() - 1; i >= 0; i--)
      {
        cout << ans[i] ;
      }
      
        cout << "\n";
      }
      
}