#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int fact[25];
    fact[0]=1;
     for(int i=1;i<=20;i++)
     {
         fact[i]=fact[i-1]*i;
         ///cout<<fact[i]<<" ";

     }

     int tc,c=1;
     cin>>tc;

     while(tc--)
     {
         long long n;
         cin>>n;
         stack<int>s;
         for(int i=20;i>=0;i--)
         {
             if(fact[i]<=n)
             {
                 n=n-fact[i];
                 ///cout<<fact[i]<<endl;
                 s.push(i);
             }
         }

          if(n==0)
         {
             printf("Case %d: ",c);

               while (s.size()!=1)
             {
                 printf("%d!+",s.top());
                 s.pop();
             }
             printf("%d!\n",s.top());
             s.pop();

         }
         else
         {
             printf("Case %d: impossible\n",c);
         }
         c++;
     }


     return 0;
}
