#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for(int i = 0; i < N; i++)
            cin >> A[i];

        int ans = 0;

        for(int i = 0; i < N; i++) 
        {
            ans++;                        
           
            for(int j = i + 1; j < N; j++) 
            {  
                if(A[j] >= A[j-1]) 
                {
                  ans++;
                } 
                
                else 
                {
                    break;  
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
