#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int l = 0, r = n - 1;

    int sereja = 0, dima = 0;
    bool turn = true; // true = Sereja, false = Dima

    while(l <= r)
    {
        if(v[l] > v[r])
        {
            if(turn) sereja += v[l];
            else dima += v[l];
            l++;
        }
        else
        {
            if(turn) 
            sereja += v[r];
            else 
            dima += v[r];
            r--;
        }

        turn = !turn;
    }

    cout << sereja << " " << dima << endl;
}