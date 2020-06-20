#include<bits/stdc++.h>

using namespace std;

int main()
{
      int f=0;
    char s[100000];

    while(gets(s))
    {

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='"')
        {
            if(f==0)
            {
                printf("``");
                f++;

            }
            else
            {
                printf("''");
                f--;
            }

        }
        else
        {
            cout<<s[i];
        }
    }

    cour<<endl;

    }
    return 0;
}
