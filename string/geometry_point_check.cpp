#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
       
        string s;
        cin >> s;

        int left = 0;
        int right = 0;
        bool pass = false;
        for(int i = 0; i < n; i++)
        {
          if(s[i] == 'R')
            left++;
            else if(s[i] == 'L')
             left--;
             
             else if(s[i] == 'U')
              right++;

              else 
               right--;

               if(left == 1 && right == 1)
               {
                pass = true;
                break;
               }
        }

        if(pass)
         cout << "YES\n";

         else 
          cout << "NO\n";
         
        
    }

    return 0;
}