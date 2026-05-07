#include <iostream>
using namespace std;

int main()
{
   int x = 10;
   int y = 20;
   int z = 30;

   char c = 'a';
   char c1 = 'b';
   cout<<(long long)&c<<endl;
   cout<<(long long) &c1<<endl;


   int *ptr = &x;

   cout<<(long long)ptr<<endl;
   cout<<(long long)*ptr<<endl;
   cout<<(long long)&y<<endl;
   cout<<(long long)&z<<endl;

   int arr[100];
   cout<<(long long)&arr[0]<<endl;
   cout<<(long long)&arr[1]<<endl;
   cout<<(long long)&arr[2]<<endl;
}
