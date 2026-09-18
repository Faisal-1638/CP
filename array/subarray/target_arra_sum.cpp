#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n), pref(n, 0);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    pref[0] = v[0];
    for(int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    unordered_map<ll, ll> mp;
    int cnt = 0;

    for(int j = 0; j < n; j++)
    {
        if(pref[j] == k)
            cnt++;

            ll val = pref[j] - k;

            if(mp.find(val) != mp.end()) // if exist then 
            {
                cnt += mp[val];
            }

            if(mp.find(pref[j]) == mp.end()) // if not find then store the current prefix sum
            {
                mp[pref[j]] = 0;
            }

            mp[pref[j]]++;
    }

    cout << cnt;
}