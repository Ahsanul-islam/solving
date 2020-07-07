#include<bits/stdc++.h>

using namespace std;

int main ()
{

    int n,num[105],ans=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    sort(num,num+n);


     for(int i=0;2*i<n;i++)
    {
       ans+=(num[i]+2)/2;
    }

    cout<<ans<<endl;

    return 0;
}


