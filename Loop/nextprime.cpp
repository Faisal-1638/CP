#include <iostream>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int next= n+1;

    while(true)
    {

     if (isPrime(next))
        {
            if (next == m)
                cout << "YES\n";
            else
                cout << "NO\n";
            break;
        }

        next++;
    }

    return 0;
}

