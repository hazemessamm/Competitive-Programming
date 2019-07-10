#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    long long int d = 0;
    cin>>n;
    cin>>d;
    string x;
    int distressCounter = 0;
    long long int y = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>x;
        cin>>y;
        if(x == "+")
        {
            d = d + y;
        }
        else
        {
            if(d < y)
            {
                distressCounter++;
            }
            else
            {
                d = d - y;
            }
        }
    }
    cout<<d<<' '<<distressCounter;
    return 0;
}
