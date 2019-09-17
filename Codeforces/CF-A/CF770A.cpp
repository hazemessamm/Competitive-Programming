#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0;
    cin>>x>>y;
    int j = 97;
    string s;
    int counter = 0;
    for(int i = 0; i < x; i++)
    {
        s += j;
        ++j;
        ++counter;
        if(counter == y)
        {
            j = 97;
            counter = 0;
        }
    }
    cout<<s;

    return 0;
}
