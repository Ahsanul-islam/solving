#include<bits/stdc++.h>

using namespace std;


int main ()
{
    int n[100010];
     n[0]=0,n[1]=1;

    for(int i=1 ;i<=100000/2; i++)
    {
        n[2*i]=n[i];
        n[2*i+1]=n[i]+n[i+1];
    }

    int num;

    while(1)
    {
        cin>>num;

        if(num==0)break;

        int m=0;

        for(int j=0;j<=num; j++)
        {
            m=max(m,n[j]);
        }
        cout<<m<<endl;

    }


    return 0;

}
