#include<bits/stdc++.h>

using namespace std;


int main()
{
 int tc,c=1;
    cin>>tc;

    while(tc--)
    {
        string sMonth,eMonth;
        char coma;
        long long sDay,eDay,start_year,end_year;
        cin>>sMonth>>sDay>>coma>>start_year;
        cin>>eMonth>>eDay>>coma>>end_year;

        if(sMonth=="January" || sMonth=="February")
        {
            start_year=start_year; //include that year
        }
        else
        {
            start_year++; //exclude that year
        }
        if(eMonth=="January" || (eMonth=="February" && eDay<29))
        {
            end_year--; //exclude that year
        }

            int y=(end_year/4)-((start_year-1)/4);
            int z=(end_year/100)-((start_year-1)/100);
            int w=(end_year/400)-((start_year-1)/400);
            int l=(y-z+w);

            cout<<"Case "<<c<<": "<<l<<endl;

            c++;
            l=0;

    }

    return 0;
}
