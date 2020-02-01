#include <iostream>
#include<algorithm>

using namespace std;

int testcases, n=0, s_students, result=0;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin>>testcases;
    for(int i = 0; i < testcases; i++)
    {
        cin>>s_students;
        for(int j = 0; j < s_students; j++)
        {
            cin>>n;
            if(j == 0)
            {
                result = n;
            }
            else
            {
                if(result < n)
                {
                    result = n;
                }
            }
        }
        cout<<"Case"<<" "<<i+1<<":"<<" "<<result<<endl;
        result = 0;
    }

    return 0;
}
