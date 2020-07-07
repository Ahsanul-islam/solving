#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int q;
        cin>>q;
        if(q==0)
        {
            return 0;
        }
        int n,m,x,y;
        cin>>n>>m;
        while(q--)
        {
            cin>>x>>y;

            if(x==n || y==m)
            {
                cout<<"divisa"<<endl;
            }
            else if(x<n && y<m)
            {
                cout<<"SO"<<endl;
            }
            else if(x>n && y>m)
            {
                cout<<"NE"<<endl;
            }
            else if(x<n && y>m)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"SE"<<endl;
            }

        }


    }


    return 0;
}
