#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int k;
        cin>>k;
        char letter[105];
        int dollar[105];

        for(int i=0;i<k;i++)
        {
            cin>>letter[i]>>dollar[i];
        }

        int m;
        double sum=0.0;

        cin>>m;
        string s;
          getline(cin,s);

        for(int i=0;i<m;i++)
        {
              getline(cin,s);

            for(int j=0;j<s.size();j++)
            {
                for(int d=0;d<k;d++)
                {
                    if(s[j]==letter[d])
                    {
                        sum+=dollar[d];
                    }
                }
            }
        }

         printf("%.2lf$\n",sum/100.00);


    }


    return 0;
}
