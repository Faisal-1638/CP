#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n, k;
   cin >> n >> k;

   vector<int> a(n);

   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
   }

   bool found = false;

   for(int i = 0; i < n; i++)
   {
       for(int j = i + 1; j < n; j++)
       {
           if(a[i] + a[j] == k)
           {
               found = true;
               break;
           }
       }

       if(found) break;
   }

   if(found)
       cout << "YES";
   else
       cout << "NO";
}

/*
Here’s what’s happening:

The inner loop (for j) is checking all pairs (a[i], a[j]) where j > i.

If it finds a pair whose sum equals k, it sets found = true and does a break.

This break only exits the inner loop. That means the outer loop (for i) would still continue to the next i if we didn’t handle it.

After the inner loop, you have:

if(found) break;

This checks whether a matching pair was already found.

If found == true, we also break out of the outer loop.

✅ Without this second break, the outer loop would keep running unnecessarily even though we already found a valid pair.

So in short:

Inner break: stop checking other j for this i because we already found a pair.

Outer break: stop checking other i because the answer is already “YES”.

It’s a common pattern when you have nested loops and want to exit early once a condition is met.
*/
