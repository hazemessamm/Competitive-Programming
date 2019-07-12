#include <iostream>

using namespace std;

int main()
{
    int n = 0, t = 0, k = 0, d = 0;
    cin>>n>>t>>k>>d;
    int result = 0;
    for (int i = 0; i < n; i+=k)
    {
        result += t;
    }
    if (result > t+d)
    {
        cout<<"YES"<<endl;
    }
    else if (result == t+d)
    {
        cout<<"NO"<<endl;
    }
    else if (result < t+d)
    {
        cout<<"NO"<<endl;
    }
    else if(k > n)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
