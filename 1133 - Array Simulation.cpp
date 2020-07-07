#include<bits/stdc++.h>

using namespace std;

/*int* S(int a[],int size_of_array)
{
    int d;
    cin>>d;

    for(int i=0;i<size_of_array;i++)
    {
        a[i]+=d;

    }

    return a;


}
*/


int main()
{
    int tc,j=1;
    cin>>tc;

    while(tc--)
    {
        int n,m,a[106];
        cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        char letter;

        for(int i=0;i<m;i++)
        {
            cin>>letter;
            if(letter=='S')
            {
                int d;
                cin>>d;
                for(int i=0;i<n;i++)
                {
                    a[i]+=d;
                }
            }
            else if(letter=='M')
            {
                int d;
                cin>>d;
                 for(int i=0;i<n;i++)
                {
                    a[i]*=d;
                }
            }
             else if(letter=='D')
            {
                int d;
                cin>>d;
                 for(int i=0;i<n;i++)
                {
                    a[i]/=d;
                }
            }
             else if(letter=='R')
            {
                reverse(a, a+n);


            }
               else if(letter=='P')
            {
                int x,y;
                cin>>x>>y;
                swap(a[x],a[y]);
            }

        }
        printf("Case %d:\n",j);

        for(int i=0;i<n-1;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;
        j++;


    }

    return 0;
}


