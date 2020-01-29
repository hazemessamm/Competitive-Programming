#include <iostream>
#include<string>


using namespace std;


int cases = 0;
string results;


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>cases;
    while(cases--)
    {
        cin>>results;
        if((results == "1" || results == "4" && results.length() == 1) || (results == "78" && results.length() == 2))
        {
            cout<<"+"<<endl;
        }
        else if(results[results.length()-1] == '5' && results[results.length()-2] == '3')
        {
            cout<<"-"<<endl;
        }
        else if(results[0] == '9' && results[results.length()-1] == '4')
        {
            cout<<"*"<<endl;
        }
        else
        {
            cout<<"?"<<endl;
        }
    }
    return 0;
}
