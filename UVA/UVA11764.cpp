#include <iostream>
#include<algorithm>

using namespace std;

int testcases, num_walls, short_counter, tall_counter, walls_h, old_wall_h;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>testcases;
    for(int i = 0; i < testcases; i++)
    {
        cin>>num_walls;
        for(int i = 0; i < num_walls; i++)
        {
            old_wall_h = walls_h;
            cin>>walls_h;
            if(i > 0)
            {
                if(walls_h > old_wall_h)
                {
                    tall_counter++;
                }
                else if(walls_h == old_wall_h)
                {
                    continue;
                }
                else
                {
                    short_counter++;
                }
            }
        }
        cout<<"Case"<<" "<<i+1<<":"<<" "<<tall_counter<<" "<<short_counter<<endl;
        short_counter = 0;
        tall_counter = 0;
    }
    return 0;
}
