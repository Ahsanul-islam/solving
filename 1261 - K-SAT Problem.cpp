#include<bits/stdc++.h>
using namespace std;


int main()
{


    long long  tc, t = 1, num, total = 0;

    cin>>tc;

    while (tc--)
    {



        long long n, m, k;
        cin >> n >> m >> k;

        long long num[40][40];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < k; j++)
            {
                cin >> num[i][j];
            }
        }

        long long p;
        cin>>p;

        long long arr[p];

        for(int i = 0; i < p; i++)
        {
            cin >> arr[i];
        }


        bool ck = false;
        for(int i = 0; i < n; i++)
        {
            ck = false;

            for(int j = 0; j < k; j++)
            {
                int wish = num[i][j];

                bool no = true;
                bool yes = false;

                for(int s = 0; s < p; s++)
                {
                    if(abs(wish) == arr[s])
                    {
                        no = false;
                        yes = true;
                    }
                }

                if(wish < 0 && no)
                {
                    ck = true;
                }

                if(wish > 0 && yes)
                {
                    ck = true;
                }


            }
            if(ck == false)
            {
                break;
            }

        }

        cout << "Case " << t++ << ": ";

        if(ck == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
