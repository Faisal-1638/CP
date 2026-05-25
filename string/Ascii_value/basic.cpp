#include <bits/stdc++.h>
using namespace std;

int main() 
{
    //Character to ASCII
    cout << (int)'A' << endl; // output: 65

    //ASCII to Character
    cout << char(97) << endl; //output: a

//Convert lowercase → uppercase

    char ch = 'b' - 32;

    cout << ch << endl; // B
    
//Convert uppercase → lowercase
    char c = 'G' + 32;

    cout << c << endl; // b

return 0;

}