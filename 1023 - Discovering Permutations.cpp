#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,c=1;
    cin>>tc;
    getchar();

    string str="ABCDEFGHIJkLMNOPQRSTUVWXYZ";
    ///cout<<str.erase(n);return 0;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;

        if(n==1 && k>1)
        {
             k=1;
        }

        if(n==2 && k>2)
        {
            k=2;
        }

        if(n==3 && k>6)
        {
            k=6;
        }

        if(n==4 && k>24)
        {
            k=24;
        }




        printf("Case %d:\n",c);
        c++;

        str.erase(n);
        cout<<str<<endl;
        k--;
        while(k--)
        {
            next_permutation(str.begin(),str.end());
            cout<<str<<endl;
        }


    }

    return 0;

}
