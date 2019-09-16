#include <iostream>
#include<cmath>

using namespace std;



int main()
{
    string s;
    cin>>s;
    int Nmoves = 0;
    int start = 0;
    for(int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 97;
        int walk = abs(start - index);
        if (walk < 13)
        {
            Nmoves += walk;
        }
        else
        {
             Nmoves += 26 - walk;
        }
        start = index;
    }
    cout<<Nmoves;

    return 0;
}
