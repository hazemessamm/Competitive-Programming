#include <iostream>
#include<algorithm>

using namespace std;

int results, currently, upcoming;


int main()
{
    std::ios_base::sync_with_stdio(false);
    while(cin>>currently>>upcoming, (currently != -1 && upcoming != -1))
    {
        results = abs(upcoming - currently);
        if(results > 50)
        {
            results = 100 - results;
        }
        cout<<results<<endl;
    }


    return 0;
}
