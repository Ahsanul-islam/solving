#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,a,n;
    cin>>tc;

    while(tc--)
    {
        int c=1;
        cin>>a;

        int x[6]= {1,1,1,1000,1000,1000};

        for(int i=0; i<a; i++)
        {
            for(int j=0; j<6; j++)
            {
                cin>>n;
                if(j<3)
                {
                    if(n>x[j])
                    {
                        x[j]=n;
                    }
                }
                else
                {
                    if(n<x[j])
                    {
                        x[j]=n;
                    }
                }
            }
        }
        if(x[0]<x[3] && x[1]<x[4] && x[2]<x[5])
        {
            printf("Case %d: %d\n",c,(x[3]-x[0])*(x[4]-x[1])*(x[5]-x[2]));
        }
        else
        {
            printf("Case %d: 0\n",c);
        }

    }

    return 0;
}
