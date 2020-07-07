#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,j=1;
    string s1,s2;
    cin>>tc;

getline (cin, s1);
    while(tc--)
    {


        getline (cin, s1);
       getline (cin, s2);
       /*cout<<s1<<endl;
       cout<<s2<<endl;*/

              int ln1 = s1.size(), ln2 = s2.size();

       int ans1 = 0, ans2 = 0;
       for(int i = 0; i<ln1; i++ ){
           s1[i] = tolower(s1[i]);
           if(s1[i]!=' ') ans1 += s1[i];///here i add all ascii value
       }

       for(int i = 0; i<ln2; i++ ){
           s2[i] = tolower(s2[i]);
           if(s2[i]!=' ') ans2 += s2[i];///here i add all adcii value
       }


       if(ans1 == ans2) printf("Case %d: Yes\n",j);
       else printf("Case %d: No\n",j);


       j++;
    }

    return 0;
}
