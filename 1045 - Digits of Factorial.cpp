#include<bits/stdc++.h>

using namespace std;

double logg[1000005];
/*
  logb^n=log10(n)/log10(b)
*/



int main ()
{
    int tc,i=1;
    cin>>tc;
     for(int i=1;i<=1000000;i++)
    {
        logg[i]=logg[i-1] + log(i); ///log10(n!)=log10^1+log10^2+..........+log10^n
    }

    while(tc--)
    {
        long long int n,b;
        cin>>n>>b;

        long long ans=(logg[n]/log(b)) +1;

         printf("Case %d: %lld\n",i++,ans);
    }

    return 0;

}

