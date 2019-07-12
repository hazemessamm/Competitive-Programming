#include <iostream>

using namespace std;

int main()
{
    int Number = 0;
    cin>>Number;
    int Teams[Number][2];
    int Counter = 0;
    for(int i = 0; i < Number; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin>>Teams[i][j];
        }
    }
    int i = 0, j = 0;
    while (i < Number && j < Number)
    {
        if (Teams[i][0] == Teams[j][1])
        {
            Counter++;
            i++;
        }
        else
        {
            i++;
        }
        if (i == Number-1)
        {
            if (Teams[i][0] == Teams[j][1])
            {
                Counter++;
            }
            i = 0;
            j++;
        }
    }
    cout<<Counter;
    return 0;
}
