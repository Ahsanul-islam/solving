#include<bits/stdc++.h>

using namespace std;

int main()
{
   int tc,i=1;
   cin>>tc;
   while(tc--)
   {
       int n[4];
       cin>>n[0]>>n[1]>>n[2];

       sort(n,n+3);

       cout<<"Case "<<i<<": "<<n[1]<<endl;
       i++;
   }
    return 0;
}

