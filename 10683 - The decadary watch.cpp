#include<bits/stdc++.h>
using namespace std;

int main()
{
    string time;
    /*In the normal system a day consists of
                 24 hrs.24hrs = 24 * 60 * 60 * 100 = 8640000 hs
    /*in the decimal system a day consists of
               10 dhrs.10 dhrs = 10 * 100 * 100 * 100 = 10000000 ds


               *///

    while(cin>>time)
    {
        long long h=(time[0]-'0')*10+time[1]-'0';
        long long m=(time[2]-'0')*10+time[3]-'0';
        long long s=(time[4]-'0')*10+time[5]-'0';
        long long c=(time[6]-'0')*10+time[7]-'0';

        long long total_time=h*60*60*100;
        total_time+=m*60*100;
        total_time+=s*100;
        total_time+=c;

        long long ans = (total_time*10000000)/8640000;

        printf("%07lld\n", ans);

        time.clear();

    }


}
