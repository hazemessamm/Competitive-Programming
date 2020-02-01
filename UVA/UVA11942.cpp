#include <iostream>
#include<algorithm>

using namespace std;

int testcases, asc_counter=0, des_counter=0;


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>testcases;
    int iterators[testcases][10];
    for(int i = 0; i < testcases; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cin>>iterators[i][j];
        }
    }
    cout<<"Lumberjacks:"<<endl;
    for(int i = 0; i < testcases; i++)
    {
        for(int j = 0; j < 10-1; j++)
        {
            if(iterators[i][j+1] > iterators[i][j])
            {
                asc_counter++;
            }
            else if(iterators[i][j+1] < iterators[i][j])
            {
                des_counter++;
            }
        }
        if(asc_counter == 9 || des_counter == 9)
        {
            cout<<"Ordered"<<endl;
        }
        else
        {
            cout<<"Unordered"<<endl;
        }
        asc_counter = 0;
        des_counter = 0;
    }

    return 0;
}
