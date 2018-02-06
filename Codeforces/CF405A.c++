#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    int x[n];
    for(int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            int temp = 0;
            if (x[j] > x[j+1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;

            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}
