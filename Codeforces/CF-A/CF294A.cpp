#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    int y[n];
    for(int i = 0; i < n; i++)
    {
        cin>>y[i];
    }
    int m = 0;
    cin>>m;
    int x[m][2];
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j< 2; j++)
        {
            cin>>x[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        int box = x[i][0]-1;
        int pos = x[i][1];
        y[box+1] += abs(pos-y[box]);
        y[box] -= abs(pos-y[box]);
        if (box > 0)
        {
            y[box-1] += pos-1;
            y[box] -= pos-1;
        }
        else
        {
            y[box] -= pos-1;
        }
        y[box] -= 1;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<y[i];
        cout<<"\n";
    }
    return 0;
}
