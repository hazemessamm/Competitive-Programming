#include <iostream>
#include<cstdio>


using namespace std;


int K, i, x, y, divx, divy;

int main()
{

    while(scanf("%d", &K), (K != 0))
    {
        scanf("%d %d", &divx, &divy);
        for(int i = 0; i < K; i++)
        {
            scanf("%d %d", &x, &y);
            if(x < divx && y > divy)
            {
                printf("NO\n");
            }
            else if(x > divx && y < divy)
            {
                printf("SE\n");
            }
            else if(x < divx && y < divy || (x < divx && y < divy && x==y))
            {
                printf("SO\n");
            }
            else if(x > divx && y > divy || (x > divx && y > divy && x ==y))
            {
                printf("NE\n");
            }
            else if(x == divx || y == divy)
            {
                printf("divisa\n");
            }

        }
    }

    return 0;
}
