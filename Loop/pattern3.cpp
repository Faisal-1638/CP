#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin>>n;

      for(int i=1; i<=n; i++)
      {
        for(int j=1; j<=n-i; j++)
        {
          cout<<" ";
        }

        for(int j=1; j<=2*i-1; j++)
        {
          cout<<"*";
        }
     
        cout<<"\n";
      }
 

return 0;

}

/*
    *
   ***
  *****
 *******

 2️⃣ Outer Loop (Rows)
for(int i = 1; i <= n; i++)

This controls rows.

i	Row
1	1st row
2	2nd row
3	3rd row
4	4th row
3️⃣ First Inner Loop → Spaces
for(int j = 1; j <= n-i; j++)

Formula:

spaces = n - i

If n = 4

i	spaces
1	3
2	2
3	1
4	0

Visualization:

row1: "   "
row2: "  "
row3: " "
row4: ""
4️⃣ Second Inner Loop → Stars
for(int j = 1; j <= 2*i-1; j++)

Formula:

stars = 2*i - 1
i	stars
1	1
2	3
3	5
4	7

Odd numbers appear:

1
3
5
7
5️⃣ Full Visualization (n = 4)
Row 1 (i = 1)

Spaces

   (3 spaces)

Stars

*

Output

   *
Row 2 (i = 2)

Spaces

  (2 spaces)

Stars

***

Output

  ***
Row 3 (i = 3)

Spaces

 (1 space)

Stars

*****

Output

 *****
Row 4 (i = 4)

Spaces

0

Stars

*******

Output

*******
6️⃣ Visual Table of Execution
i	spaces	stars	row output
1	3	1	*
2	2	3	***
3	1	5	*****
4	0	7	*******
7️⃣ Pattern Logic (Very Important)

For pyramid problems remember:

spaces = n - i
stars  = 2*i - 1

Where

i = row number
8️⃣ Mental Visualization Trick (Used in CP)

Imagine this grid:

row1:   *
row2:  ***
row3: *****
row4:*******

Left side decreases spaces
Right side increases stars.
*/