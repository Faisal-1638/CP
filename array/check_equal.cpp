#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 1, 1, 5};
bool equal = true;

for(int i = 1; i < v.size(); i++)
{
    if(v[i] != v[0])
    {
        equal = false;
        break;
    }
}

if(equal)
 cout << "YES\n";

 else 
  cout << "No\n";
}