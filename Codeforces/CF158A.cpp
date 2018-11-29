#include <iostream>

using namespace std;

int main()
{
    int x=0,y=0;
    cin>>x>>y;
    int players[x];
    int advancer = 0;
    int counter = 0;
    for (int i = 0; i < x; i++)
    {
        cin>>players[i];
    }
    advancer = players[y-1];
    int check = 0;
    for (int i = 0; i < x; i++)
    {
        if (players[i] == 0)
        {
            check++;
        }
    }
    if (check != x)
    {
        if (advancer == 0)
        {
            for(int i = 0; i < x; i++)
            {
                if(players[i] > advancer)
                {
                    counter++;
                }
            }
        }
        else{
    for(int i = 0; i < x; i++)
    {
        if (players[i] >= advancer)
        {
            counter++;
        }
    }
        }
    cout<<counter<<endl;
    }
    else {
        cout<<0<<endl;
    }
    return 0;
}
