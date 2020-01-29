#include <iostream>
#include<cstdio>


using namespace std;

int events=0, num_reasons=0, counter_of_zeros=0, counter=0, cases=1;

int main()
{

    while(scanf("%d", &events), (events != 0))
    {
        for(int i = 0; i < events; i++)
        {
            scanf("%d", &num_reasons);
            if(num_reasons > 0)
            {
                counter++;
            }
            else
            {
                counter_of_zeros++;
            }
        }

        printf("Case %d: %d\n", cases, counter-counter_of_zeros);
        cases++;
        counter=0;
        counter_of_zeros=0;
    }
    return 0;
}
