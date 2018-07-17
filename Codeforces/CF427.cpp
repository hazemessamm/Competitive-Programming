#include <iostream>

using namespace std;

int main()
{
    int n, hired= 0, crime= 0, happen;
    cin>>n;
    while(n!=0)
    {
        cin>>happen;

        if(happen > 0)
        {
            hired += happen;
        }
        else if(hired > 0)
        {
            hired--;
        }
        else
        {
            crime++;
        }
        n--;
    }

    cout<<crime<<endl;
    return 0;
}
