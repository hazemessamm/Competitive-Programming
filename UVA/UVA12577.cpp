#include <iostream>
#include<string>


using namespace std;


int counter = 1;
string cases;


int main()
{
    std::ios_base::sync_with_stdio(false);
    while(getline(cin, cases), (cases != "*"))
    {
        if(cases == "Hajj")
        {
            cout<<"Case" <<" "<<counter<<": "<<"Hajj-e-Akbar"<<endl;
        }
        else
        {
            cout<<"Case" <<" "<<counter<<": "<<"Hajj-e-Asghar"<<endl;
        }
        counter++;
    }
    return 0;
}
