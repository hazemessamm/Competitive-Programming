#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    int x[n];
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i >= 1)
        {
        if(x[i] != x[i-1])
        {
            counter++;
        }
    }
    }
    cout<<counter+1<<endl;
    return 0;
}
