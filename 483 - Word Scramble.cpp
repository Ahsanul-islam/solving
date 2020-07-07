#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector<char>v;
    while(getline(cin,s))
    {
        int n=s.size();
        for(int i=0; i<s.size(); i++)
        {

            if(s[i]!=' ')
            {
                v.push_back(s[i]);///here i push every character in vector Until found any space
            }

            if(s[i]==' ' || n-1==i)
            {
                ///finally revers my vector and print
                reverse(v.begin(), v.end());
                for(int j=0; j<v.size(); j++)
                {
                    cout<<v[j];
                }
                v.clear();///clear my vector and print space
                cout<<" ";

            }

        }

        cout<<endl;///print new line
    }


    return 0;
}

