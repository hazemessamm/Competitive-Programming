#include <iostream>
#include<algorithm>

using namespace std;

long int n, b, h, w, budget = -1;


int main()
{
    std::ios_base::sync_with_stdio(false);
    while(cin>>n>>b>>h>>w)
    {
        int price[h];
        int avail[w];

        for(int i = 0; i < h; i++)
        {
            cin>>price[i];
            for(int j = 0; j < w; j++)
            {
                cin>>avail[j];
            }
            sort(avail, avail+w);
            for(int j = 0; j < w; j++)
            {

                if((price[i] * avail[j]) <= b && avail[j] >= n)
                {
                    if(j == 0)
                    {
                        budget = price[i] * avail[j];
                    }
                    else
                    {
                        if(price[i]*avail[j] < budget)
                        {
                            budget = price[i]*avail[j];
                        }
                    }
                }
            }
        }
        if(budget < 0)
        {
            cout<<"stay home"<<endl;
        }
        else
        {
            cout<<budget<<endl;
        }
        budget = -1;
    }


    return 0;
}
