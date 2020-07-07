#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >>tc;

    char pos[3];
    int dr[] = {-2,-2,-1,-1,1,1,2,2};
    int dc[] = {-1,1,-2,2,-2,2,-1,1};

    while(tc--)
    {
        cin>>pos;

        int r = pos[0]-'a', c = pos[1]-'1', ans = 0;

        for(int i = 0; i<8; ++i)
        {
            int r2 = r+dr[i], c2 = c+dc[i];

            if(r2>=0 && r2<8 && c2>=0 && c2<8)
            {
                 ++ans;
            }

        }

        cout<<ans<<endl;


    }
return 0;
}

