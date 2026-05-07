#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n; 

    vector<long long> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if(n == 1)
    {
        cout<< 1 ;
        return 0;
    }

      int curr = 2;
      int mx = 2;
        
        for(int i = 2; i < n; i++)
        {
            if(v[i] == v[i-1] + v[i-2])
            {
               curr++;
            }
              else
              {
                 curr = 2;
              } 
                if(curr > mx)
                {
                 mx = curr; 
                }     
        }

        cout<<mx;

        
    return 0;
}

