#include <iostream>
#include<cstdio>
#include<algorithm>

using namespace std;


int testcases;
int salaries[3];


int main()
{

    scanf("%d", &testcases);
    for(int i = 1; i < testcases+1; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &salaries[j]);
        }
        sort(salaries, salaries+3);
        printf("Case %d: %d\n", i,salaries[1]);
    }

    return 0;
}
