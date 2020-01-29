#include <iostream>
#include<string>
using namespace std;


int testcases;
string number;


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>testcases;
    for(int i = 0; i < testcases; i++)
    {
        cin>>number;
        if(number.length() > 3)
        {
            cout<<3<<endl;
        }
        else
        {
            if (number[0] == 'o' && number[1] == 'n' && number[2] == 'e')
            {
                cout<<1<<endl;
            }
            else if(number[0] == 'o' && number[1] == 'n')
            {
                cout<<1<<endl;
            }
            else if(number[1] == 'n' && number[2] == 'e')
            {
                cout<<1<<endl;
            }
            else if(number[0] == 'o' && number [2] == 'e')
            {
                cout<<1<<endl;
            }
            else if(number[0] == 't' && number[1] == 'w' && number[2] == 'o')
            {
                cout<<2<<endl;
            }
            else if(number[0] == 't' && number[1] == 'w')
            {
                cout<<2<<endl;
            }
            else if(number[1] == 'w' && number[2] == 'o')
            {
                cout<<2<<endl;
            }
            else if(number[0] == 't' && number[2] == 'o')
            {
                cout<<2<<endl;
            }

        }


    }
    return 0;
}
