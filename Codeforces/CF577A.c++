#include <iostream>

using namespace std;

int main()
{
    long long x = 0, y = 0;
    cin>>x>>y;
    long long sum = 0;
    long long counter = 0;
    for(int i = 1; i<=x; i++)
    {
        if(y%i == 0 && y/i <= x)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
