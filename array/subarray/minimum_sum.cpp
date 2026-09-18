//Naive (Brute Force) approach using nested loops.
//[Naive Approach] Fixed-Size Window Brute Force - 
//O(n × k) time and O(1) space
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> h(n);

    for(int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int mn = INT_MAX;
    int idx = 0;
    
     for(int i = 0; i <= n - k; i++)
     {
        int sm = INT_MAX;
         for(int j = i; j < i + k; j++)
         {
            sm += h[j];
         }

         if(sm < mn)
            {
                mn = sm;
                idx = i;
            }

     }

     cout << idx + 1;
    
    
}


/*
[Better Approach - 1] Using Prefix Sum - O(n) Time and O(n) Space
//[Better Approach - 1] Using Prefix Sum - O(n) Time and O(n) Space

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> h(n), pref(n + 1, 0);

    for(int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    for(int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + h[i];
    }



    int mn = INT_MAX;
    int idx = -1;
    
     for(int i = 0; i <= n - k; i++)
     {
        int j = i + k - 1;
        int sm = pref[j + 1] - pref[i];
         if(sm < mn)
            {
                mn = sm;
                idx = i;
            }

     }

     cout << idx + 1;        
}



*/


/*
[Better Approach - 2] Sliding Window using Queue - O(n) Time and O(k) Space


*/