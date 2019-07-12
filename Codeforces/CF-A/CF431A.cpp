#include <iostream>

using namespace std;

int main()
{
    int a[4];
    string s;
    for(int i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    cin>>s;
    int calories = 0;
    for(int i =0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            calories += a[0];
        }
        else if(s[i] == '2')
        {
            calories += a[1];
        }
        else if(s[i] == '3')
        {
            calories += a[2];
        }
        else
        {
            calories += a[3];
        }
    }
    cout<<calories;
    return 0;
}
