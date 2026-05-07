#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n; 

        vector<long long> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool sameparity = true;

        for(int i = 1; i < n; i++)
        {
            if((v[i] % 2) != (v[0] % 2))
            {
                sameparity = false;
                break;
            } 
        }

            if(sameparity)
              cout << "YES\n";

                else
                {
                    long long min = LLONG_MAX;
                    for(int i = 0; i < n; i++)
                    {
                        if(v[i] < min)
                        {
                        min = v[i];
                        }
                    }

                    if(min & 1)
                       cout << "YES\n";
                        
                        else 
                            cout<<"NO\n";
                }
        
    }

     return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n; 

        vector<long long> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool sameparity = true;

        for(int i = 1; i < n; i++)
        {
            if((v[i] % 2) != (v[0] % 2))
            {
                sameparity = false;
                break;
            } 
        }
     
                long long mn = *min_element(v.begin(), v.end());

                if(sameparity || mn & 1)
                    cout << "YES\n";
                    
                  else 
                    cout<<"NO\n";  
    }

     return 0;
}


*/