#include <iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;


string language;
int counter=1;

int main()
{

    while(getline(cin, language), (language != "#"))
    {
        if(language == "HELLO")
        {
            printf("Case %d: ENGLISH\n", counter);
        }
        else if(language == "HOLA")
        {
            printf("Case %d: SPANISH\n", counter);
        }
        else if(language == "HALLO")
        {
            printf("Case %d: GERMAN\n", counter);
        }
        else if(language == "BONJOUR")
        {
            printf("Case %d: FRENCH\n", counter);
        }
        else if (language == "CIAO")
        {
            printf("Case %d: ITALIAN\n", counter);
        }
        else if(language == "ZDRAVSTVUJTE")
        {
            printf("Case %d: RUSSIAN\n", counter);
        }
        else
        {
            printf("Case %d: UNKNOWN\n", counter);
        }
        counter++;
    }

    return 0;
}
