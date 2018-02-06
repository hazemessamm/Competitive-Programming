#include <iostream>

using namespace std;

int main()
{
    int n = 0, b = 0, d = 0;
    cin>>n>>b>>d;
    int a;
    int result = 0, counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if (a > b)
        {
            continue;
        }
        else
        {
            result += a;
            if (result > d)
            {
            ++counter;
            result = 0;
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}
