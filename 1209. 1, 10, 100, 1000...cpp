#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin>>tc;

    long long n,cas=0,x,y;
    while(tc--)
    {
        cin>>n;
        double s=ceil(sqrt(n));
        long long d = (s*s) - n;

        if(d<s)
        {
            y=s;
            x=d+1;
        }
        else
        {
            x=s;
            y=n-(s-1)*(s-1);
        }
        if((int)s%2==0)
        {
            long long temp=x;
            x=y;
            y=temp;
        }
        cout<<"Case "<<++cas<<": "<<x<<" "<<y<<endl;
    }
    return 0;
}
