#include <iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int counter = 0, counter2 = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            counter++;
        }
        else {
            counter2++;
        }
    }
    if (counter > counter2)
    {
        for(int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else{
         for(int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}
