#include<iostream>
#include<algorithm>


using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}


int main() {
    std::ios_base::sync_with_stdio(false);
    int testcases, x;
    cin>>testcases;
    int *maximum, *minimum;
    for(int i = 0; i < testcases; i++)
    {
        cin>>x;
        int market_positions[x];
        for(int j = 0; j < x; j++)
        {
            cin>>market_positions[j];
        }
        maximum = max_element(market_positions, market_positions+x);
        minimum = min_element(market_positions, market_positions+x);
        cout<<2 * (*maximum-*minimum)<<"\n";
    }
	return 0;
}
