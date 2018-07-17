#include <iostream>

using namespace std;

int main()
{
    string a;
    string b;
    int result = 1;
    cin>>a>>b;
    int j=0;
    for (int i = 0; i < b.length(); i++)
    {
        if(a[j] == b[i])
        {
            result++;
            j++;
        }
        else
        {
            continue;
        }
    }
    cout<<result<<endl;
    return 0;
}
