#include<bits/stdc++.h>

using namespace std;

vector<int>v;

int main()
{

    int a;

    cin>>a;

    if(a==0)
    {
        cout<<10<<endl;
        return 0;
    }

    else if(a==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(int i=9; i>1; i--)
    {
        while(a%i==0)
        {
            a/=i;
            v.push_back(i);
        }
    }

    if(a==1)
    {
        for(int i=v.size()-1; i>=0; i--)
        {
            cout<<v[i];
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;

}
