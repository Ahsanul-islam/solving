#include <bits/stdc++.h>

using namespace std;


int main()
{
    while(1)
    {
        string s,new_string;
  cin>>s;
  int number=0,j=0;

  for(int i=0;i<s.size();i++)
  {
      if(s[i]>'0' && s[i]<='9')
      {
          number++;///cout<<number<<endl;
      }
      if(s[i+1]>='a' && s[i+1]<='z' && s[i]>='A' && s[i]<='Z' )
      {
          new_string[j]=s[i+1];new_string[j+1]=s[i];
          j+=2;i++;
      }
      else if(s[i]=='0' && s[number-1]>'0' && s[number-1]<='9')
      {
          new_string[j]=s[number-1];
          j++;
          number--;
      }
      /*else if(s[i]=='0' && number==0)
      {
          new_string[j]=s[i];
          j++;
      }*/
      else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
      {
          new_string[j]=s[i];
          j++;
      }
  }

  for(int i=0;i<j;i++)
  {
      cout<<new_string[i];
  }



    }

    return 0;
}
