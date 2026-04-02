#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v= {5, 2, 9, 1, 7};
  int largest= INT_MIN;
  int secondlarg= INT_MIN;

  for(int i=0; i<v.size(); i++)
  {
    if(v[i]>largest)
    {
      secondlarg=largest;
      largest=v[i];
    }

    else if(v[i]>secondlarg && v[i]!=largest)
    {
      secondlarg=v[i];
    }

  }

  cout<<largest<<" "<<secondlarg;


 

return 0;

}