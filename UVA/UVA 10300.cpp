#include <iostream>

using namespace std;

int testcases, num_farmers, size_farm, num_animals, env_friendliness, premium;


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>testcases;
    for(int i = 0; i < testcases; i++)
    {
        cin>>num_farmers;
        for(int j = 0; j < num_farmers; j++)
        {
            cin>>size_farm>>num_animals>>env_friendliness;
            premium += size_farm * env_friendliness;
        }
        cout<<premium<<endl;;
        premium = 0;
    }

    return 0;
}
