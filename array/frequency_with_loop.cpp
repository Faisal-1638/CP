#include<bits/stdc++.h>
using namespace std;
int main()
{
     int N,M;
     cin >> N >> M;

     vector<int> A(N);
     vector<int> freq(M + 1, 0);

        for(int i = 0; i < N; i++)
        {
          cin >> A[i];
        }

          for(int i = 0; i < N; i++)
          {
            freq[A[i]]++;
          }

            for(int i = 1; i <= M; i++)
            {
              cout << freq[i] << "\n";
            }

            return 0;

}

/*
    
*/