#include <iostream>
#include<sstream>

using namespace std;

int testcases, num_instructions, point = 0;

int extractIntegerWords(string str)
{
    stringstream ss;

    ss << str;

    string temp;
    int found;
    while (!ss.eof())
    {
        ss >> temp;

        if (stringstream(temp) >> found)
        {
            temp = "";
            return found;
        }

    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>testcases;
    for(int i = 0; i < testcases; i++)
    {
        cin>>num_instructions;
        string instructions[num_instructions+1];
        for(int j = 0; j < num_instructions+1; j++)
        {
            getline(cin, instructions[j]);
        }
        for(int j = 0; j < num_instructions+1; j++)
        {
            if(instructions[j][0] == 'L')
            {
                point--;
            }
            else if(instructions[j][0] == 'R')
            {
                point++;
            }
            else if(instructions[j][0] == 'S')
            {

                int result = extractIntegerWords(instructions[j]);
                instructions[j] = instructions[result];
                if(instructions[j][0] == 'L')
                {
                    point--;
                }
                else if(instructions[j][0] == 'R')
                {
                    point++;
                }
            }
        }
        cout<<point<<endl;
        point = 0;
    }
    return 0;
}
