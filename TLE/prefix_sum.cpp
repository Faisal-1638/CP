
/*
https://codeforces.com/problemset/problem/1807/D
//this code cause TLE -> O(n * q)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 1);

        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        while(q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;

            long long sum = 0;
            for(int i = 1; i <= n; i++)
            {
                if(i >= l && i <= r)
                  continue;

                  else 
                    sum += a[i];
            }

            long long newSum = sum + ( r - l + 1) * k;
               
            if(newSum %  2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 1);
        vector<long long> pref(n + 1, 0);

        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        long long total = pref[n];

        while(q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;

            long long rangeSum =
                pref[r] - pref[l - 1];

            long long newSum =
                total - rangeSum +
                (r - l + 1) * k;

            if(newSum % 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}

/*
Suppose:

a = [2 2 1 3 2]

We make prefix sum array.

Prefix Sum

pref[i] = sum from 1 → i

So:

i	a[i]	pref[i]
1	2	2
2	2	4
3	1	5
4	3	8
5	2	10

Total sum:

total = pref[5] = 10
Query Example
l = 2
r = 3
k = 4

Meaning:

Replace positions 2 to 3 with 4.

Array becomes:

[2 4 4 3 2]

New sum:

2 + 4 + 4 + 3 + 2 = 15

15 is odd → YES.

How Prefix Sum Finds Old Range Sum

We need sum of old elements from 2 → 3.

Formula:

rangeSum = pref[r] - pref[l - 1]

So:

rangeSum = pref[3] - pref[1]
         = 5 - 2
         = 3

Why?

pref[3] contains:

2 + 2 + 1

pref[1] contains:

2

Subtract:

(2 + 2 + 1) - (2)
= 2 + 1
= 3

which is exactly sum from 2 → 3.

Build New Sum

Old total:

10

Remove old range:

10 - 3 = 7

How many replaced elements?

r - l + 1
= 3 - 2 + 1
= 2

Each becomes 4:

2 * 4 = 8

Add it:

7 + 8 = 15

Final formula:

newSum = total - rangeSum + (r - l + 1) * k

This avoids looping through the whole array every query.
*/