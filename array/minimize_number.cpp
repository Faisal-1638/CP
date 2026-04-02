#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<int> v(N);

       for(int i = 0; i < N; i++)
       { 
         cin >> v[i];
       }

       int opr = 0;

         while(true)
         {
            bool alleven=true;
            for(int i=0; i<N; i++)
            { 
               if(v[i] % 2 !=0)
               {
                  alleven = false;
                  break;
               }
            }
            
            if(!alleven)
                break;

            for(int i = 0; i < N; i++)
            {
               v[i] /= 2;
            }

            opr++;
         }

         cout<<opr;
 
          return 0;

}

/*
Good question 👍 Let’s see what happens if you remove this line:

if(!allEven) break;
Original Logic

This line stops the loop when any number becomes odd.

if(!allEven) break;

Meaning:

If there is an odd number → stop the while loop.

If You Remove It

Your loop becomes:

while(true)
{
    bool allEven = true;

    for(int x : a)
    {
        if(x % 2 != 0)
        {
            allEven = false;
            break;
        }
    }

    for(int i = 0; i < n; i++)
    {
        a[i] /= 2;
    }

    count++;
}

Now the loop condition is:

while(true)

which means infinite loop ♾️.

Even if numbers become odd, the program will not stop.

Example

Input:

8 12 40
Step 1
8 12 40 → 4 6 20
count = 1
Step 2
4 6 20 → 2 3 10
count = 2

Now 3 is odd.

But since you removed the break, it still divides:

Step 3
2 3 10 → 1 1 5
count = 3
Step 4
1 1 5 → 0 0 2
count = 4
Step 5
0 0 2 → 0 0 1
count = 5
Step 6
0 0 1 → 0 0 0
count = 6

Now it becomes:

0 0 0

And dividing 0/2 always gives 0.

So the loop becomes infinite and never stops 🚨.

Why break is Important

This line:

if(!allEven) break;

prevents:

wrong operations

infinite loop

It ensures the program stops exactly when an odd number appears.

✅ Short rule:

while(true) must have a break condition, otherwise the program may run forever.

another approach
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;

    while(true)
    {
        bool allEven = true;

        for(int x : a)
        {
            if(x % 2 != 0)
            {
                allEven = false;
                break;
            }
        }

        if(allEven)
        {
            for(int i = 0; i < n; i++)
            {
                a[i] /= 2;
            }

            count++;
        }
        else
        {
            break;
        }
    }

    cout << count << endl;
}
*/