#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tc,n,i;
   cin>>tc;

    for(i=0; i<tc; i++)
        {
            cin>>n;
            n=n*567;
            n=n/9;
            n+=7492;
            n*=235;
            n/=47;
            n=n-498;
            n/=10;
            n%=10;
            n=abs(n);
            cout<<n<<endl;
        }

    return 0;
}
