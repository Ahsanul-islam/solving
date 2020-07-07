#include<bits/stdc++.h>

using namespace std;

map <string, char> symbol;
map<string, char>::iterator it;


int main()
{

    symbol[".-"] = 'A';       symbol[".---"] = 'J';     symbol["..."] = 'S';      symbol[".----"] = '1';    symbol[".-.-.-"] = '.';    symbol["---..."] = ':';
    symbol["-..."] = 'B';     symbol["-.-"] = 'K';      symbol["-"] = 'T';        symbol["..---"] = '2';    symbol["--..--"] = ',';    symbol["-.-.-."] = ';';
    symbol["-.-."] = 'C';     symbol[".-.."] = 'L';     symbol["..-"] = 'U';      symbol["...--"] = '3';    symbol["..--.."] = '?';    symbol["-...-"] = '=';
    symbol["-.."] = 'D';      symbol["--"] = 'M';       symbol["...-"] = 'V';     symbol["....-"] = '4';    symbol[".----."] = '\'';   symbol[".-.-."] = '+';
    symbol["."] = 'E';        symbol["-."] = 'N';       symbol[".--"] = 'W';      symbol["....."] = '5';    symbol["-.-.--"] = '!';    symbol["-....-"] = '-';
    symbol["..-."] = 'F';     symbol["---"] = 'O';      symbol["-..-"] = 'X';     symbol["-...."] = '6';    symbol["-..-."] = '/';     symbol["..--.-"] = '_';
    symbol["--."] = 'G';      symbol[".--."] = 'P';     symbol["-.--"] = 'Y';     symbol["--..."] = '7';    symbol["-.--."] = '(';     symbol[".-..-."] = '"';
    symbol["...."] = 'H';     symbol["--.-"] = 'Q';     symbol["--.."] = 'Z';     symbol["---.."] = '8';    symbol["-.--.-"] = ')';    symbol[".--.-."] = '@';
    symbol[".."] = 'I';       symbol[".-."] = 'R';      symbol["-----"] = '0';    symbol["----."] = '9';    symbol[".-..."] = '&';


    int tc,j=1;

    cin>>tc;
    char s[2020];
    cin.ignore();

   for(j=1; j<=tc; j++)
    {


        gets(s);

        printf("Message #%d\n", j);
         int i=0;
         while(i<strlen(s))
         {
             if(s[i]==' ')
             {
                 if(s[++i]==' ')
                 {
                     cout<<' ';
                     i++;
                 }
                 continue;

             }

             char letter[10];

             sscanf(s+i,"%s",&letter);
             cout<<symbol[letter];

             while(i<strlen(s) && s[i]!=' ')
             {
                 i++;
             }
         }

         cout<<endl;
        if(tc!=j) cout<<endl;

    }

    return 0;

}
