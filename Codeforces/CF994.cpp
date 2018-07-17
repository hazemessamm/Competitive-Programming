#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0, j = 0, h = 0;
    cin>>n;
    int x[n];
    cin>>m;
    int y[m];
    int z[m];
    for(int i = 0; i < n; i++)
    {

        cin>>x[i];
    }

    for(int i = 0; i < m; i++)
    {

        cin>>y[i];
    }

    for(int i = 0; i < n; i++)
    {
     for(j = 0; j < m; j++)
     {
         if(x[i] == y[j])
         {
             z[h] = x[i];
              h++;
         }
     }

    }
    for(j = 0; j < h; j++)
    {
        cout<<z[j]<<' ';
    }
    return 0;
}
