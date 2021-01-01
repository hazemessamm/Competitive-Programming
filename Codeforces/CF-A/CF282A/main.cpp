#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin>>n;
    int x=0;
    string operation;
    for(int i = 0; i < n; i++)
    {
        cin>>operation;
        if(operation == "++X")
        {
            ++x;
        }
        else if(operation == "X++")
        {
            x++;
        }
        else if(operation == "X--")
        {
            x--;
        }
        else if(operation == "--X")
        {
            --x;
        }
        else
        {
            continue;
        }
    }
    cout<<x;
    return 0;
}
