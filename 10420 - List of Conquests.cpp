#include<bits/stdc++.h>
using namespace std;

map<string,int>frequency;
map<string,int>::iterator it;

int main()
{
    int tc;

    cin>>tc;

    string country,name;
    while(tc--)
    {
        cin>>country;
        getline(cin,name);

        frequency[country]++;
    }

     for( it=frequency.begin();it!=frequency.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}
