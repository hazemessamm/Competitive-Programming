#include <iostream>
#include<sstream>

using namespace std;

int family_members;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>family_members;
    string family[family_members];
    string song[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    for(int i = 0; i < family_members; i++)
    {
        cin>>family[i];
    }
    int who_sang[family_members];
    int i=0, j=0, counter = 0;
    bool flag = false;
    while(true)
    {
        cout<<family[i]<<":"<<" "<<song[j]<<endl;

        if(i == family_members-1)
        {
            flag = 1;
        }
        if(j == 15 && flag)
        {
            break;
        }
        i++;
        j++;
        if(i >= family_members)
        {
            i = 0;
        }
        if(j >= 16)
        {
            j = 0;
        }
    }
    return 0;
}
