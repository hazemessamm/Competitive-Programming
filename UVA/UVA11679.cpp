#include <iostream>
#include<algorithm>

using namespace std;

int n_banks, debtures;
bool flag = true;


int main()
{
    std::ios_base::sync_with_stdio(false);
    while(cin>>n_banks>>debtures, (n_banks != 0 && debtures != 0))
    {
        int mon_res[n_banks+1];
        for(int i = 0; i < n_banks; i++)
        {
            cin>>mon_res[i];
        }
        int banks[debtures][3];
        for(int i = 0; i < debtures; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin>>banks[i][j];

            }
            mon_res[banks[i][0]-1] -= banks[i][2];
            mon_res[banks[i][1]-1] += banks[i][2];
        }
        for (int i = 0; i < n_banks; i++)
        {
            if (mon_res[i] < 0)
            {
                flag = false;
            }
        }
        if(flag)
        {
            cout<<"S"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
        flag = true;
    }

    return 0;
}
