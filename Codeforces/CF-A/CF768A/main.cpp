#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int stewards[n];

    vector<int> s;
    int counter = 0;
    int element;
    for(int i = 0; i<n; i++)
    {
        cin>>element;
        s.push_back(element);
    }

    int max_strength = *max_element(s.begin(), s.end());
    int min_strength = *min_element(s.begin(), s.end());


    for(int i= 0; i <n; i++)
    {
        if(s[i] < max_strength && s[i] > min_strength)
        {
            counter++;
        }
    }
    cout<<counter;


    return 0;
}
