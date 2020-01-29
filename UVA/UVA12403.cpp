#include <iostream>
#include<string>
#include<sstream>


using namespace std;



int testcases, amount, flag = 0, total_amount;
string command, str_amount;


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>testcases;
    testcases++;
    while(testcases--)
    {
        getline(cin, command);
        if(command[0] == 'r')
        {
            cout<<total_amount<<endl;
        }
        else
        {
            for(int i = 1; i < command.length(); i++)
            {
                if(command[i] == ' ')
                {
                    flag = 1;
                }
                if(flag == 1)
                {
                    str_amount += command[i+1];
                }
            }
            istringstream(str_amount) >> amount;
            flag = 0;
            total_amount += amount;
            str_amount = "";
        }
    }

    return 0;
}
