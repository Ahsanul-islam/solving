#include<bits/stdc++.h>

using namespace std;

int main()
{
    char m[35];


   while(scanf("%s",m)!=EOF)
   {

       int len=strlen(m);

       for(int i=0;i<len;i++)
       {

               if(m[i]=='1' || m[i]=='0' || m[i]=='-')
               {
                   cout<<m[i];
               }
               else if(m[i]>=65 && m[i]<=67)
               {
                   cout<<2;
               }
               else if(m[i]>=68 && m[i]<=70)
               {
                   cout<<3;
               }
               else if(m[i]>=71 && m[i]<=73)
               {
                   cout<<4;
               }
                else if(m[i]>=74 && m[i]<=76)
               {
                   cout<<5;
               }
               else if(m[i]>=77 && m[i]<=79)
               {
                   cout<<6;
               }
                else if(m[i]>=80 && m[i]<=83)
               {
                   cout<<7;
               }
                 else if(m[i]>=84 && m[i]<=86)
               {
                   cout<<8;
               }
                else if(m[i]>=87 && m[i]<=90)
               {
                   cout<<9;
               }

       }
       cout<<endl;
   }
}
