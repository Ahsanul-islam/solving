#include<bits/stdc++.h>

using namespace std;


int main ()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int mark[10];
        for(int i=0; i<10; i++)
        {
            mark[i]=0;
        }
        int n;
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            int j=i;
            while(j!=0)
            {
                int k=j%10;
                mark[k]++;
                j/=10;
            }
        }

        for(int i=0;i<9;i++)
        {
            cout<<mark[i]<<" ";
        }
        cout<<mark[9]<<endl;

    }

    return 0;

}
