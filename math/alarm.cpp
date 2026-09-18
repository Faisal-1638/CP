#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, H, M;
        cin >> n >> H >> M;

        int mn = INT_MAX;
        while(n--)
        {
            int h, m;
            cin >> h >> m;

           int diff;

            if(h == H && m == M)
            {
                diff = 0;
            }

                else
                {
                    diff = (H * 60 + M) - (h * 60 + m);
                }

                    if(diff < 0)
                    {
                        diff += 24 * 60;
                    }

           mn = min(mn, diff);
             
        }

        cout << mn / 60 << " " << mn % 60 << "\n";

      
        
    }

    return 0;
}