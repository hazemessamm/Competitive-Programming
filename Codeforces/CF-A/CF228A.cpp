#include <iostream>

using namespace std;

int main()
{
    int count, ans;
    long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    ans=0;
    count = 1;
    if(s1!=s2 && s1!=s3 && s1!=s4)
    {
        count++;
    }
    if(s2!=s3 && s2!=s4)
    {
        count++;
    }
    if(s3!=s4)
    {
        count++;
    }
    ans = (4-count);
    cout << ans << endl;
    return 0;
}
