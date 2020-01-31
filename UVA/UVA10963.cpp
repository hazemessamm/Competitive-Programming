#include <iostream>

using namespace std;

int testcases, counter, x, y, w, result_old, result_new;


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>testcases;
    for(int i = 0; i < testcases; i++)
    {
        if(testcases)
        {
            cout<<"\n";
        }
        cin>>w;
        for(int j = 0; j < w; j++)
        {
            result_old = x-y;
            cin>>x>>y;
            result_new = x-y;
            if(result_old == result_new)
            {
                counter++;
            }
        }
        if(counter == w-1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        counter = 0;

    }

    return 0;
}
