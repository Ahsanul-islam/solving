#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,i=1;
    cin>>tc;

    while(tc--)
    {
        long long int n,m;
        cin>>n>>m;

        n--;
        int ans1=(n/3)*2;
        int ans2=(m/3)*2;

        if(n%3==2)
        {
            ans1+=1;
        }
         if(m%3==2)
        {
            ans2+=1;
        }

        printf("Case %d: %d\n",i++,ans2-ans1);

    }

    return 0;
}







