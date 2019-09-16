#include <iostream>

using namespace std;

int main()
{
    int y = 0, w = 0;
    cin>>y>>w;
    string probabilities[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    int maximum = max(y, w);
    cout<<probabilities[6-maximum];
    return 0;
}
