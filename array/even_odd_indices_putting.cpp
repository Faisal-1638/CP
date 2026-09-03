#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> v(n + 1);
        int even = 2;
        for(int i = 1; i <= n; i+=2)
        {
            v[i] = even;
            even += 2;
        }

         int odd = 1;
        for(int i = 2; i <= n; i+=2)
        {
            v[i] = odd;
            odd += 2;
        }


        for(int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }  

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n+1);
        
        for(int i = 1; i < n; i += 2)
        {
            v[i] = i + 1;
            v[i+ 1] = i;
        }

        for(int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
    }  

    return 0;
}
*/