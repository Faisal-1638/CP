#include <bits/stdc++.h>
using namespace std;
bool prime(int x)
{
  if(x < 2)
    return false;
  for(int i = 2; i * i <= x; i++)
  {
    if(x % i == 0)
      return false;
  }

  return true;
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;

      for(int i= 2; i <= 100000; i++)
      {
          if(prime(i) && !prime(n + i))
          {
            cout << i << "\n";
            break;
          }

      }
      
    }

    
return 0;

}