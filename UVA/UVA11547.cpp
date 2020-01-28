#include <iostream>
#include<cstdio>
#include<cmath>

using namespace std;


int testcases, n;

int main()
{

    scanf("%d", &testcases);
    for(int i = 0; i < testcases; i++)
    {
        scanf("%d", &n);
        n = abs(((((((n*567)/9)+7492)*235)/47)-498)/10%10);
        printf("%d\n", n);
    }

    return 0;
}
