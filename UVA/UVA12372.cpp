#include <iostream>
#include<string>
using namespace std;



int testcases, lwh, counter, cases=1;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>testcases;
    while(testcases--)
    {
        for(int i =0; i < 3; i++)
        {
            cin>>lwh;
            if(lwh <= 20)
            {
                counter++;
            }
        }
        if(counter == 3)
        {
            cout<<"Case "<<cases<<": "<<"good"<<endl;
        }
        else
        {
            cout<<"Case "<<cases<<": "<<"bad"<<endl;
        }
        cases++;
        counter = 0;
    }

    return 0;
}
