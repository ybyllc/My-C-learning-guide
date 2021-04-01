#include <stdio.h>
int main()
{	
	int x;
    int i;
    int hang;
    while (scanf("%d",&x)!=EOF)
    {
        for (hang = 1; hang<=x-1; hang++)//第一行到第x-1行
        {
            for(i = 1; i <= x-hang;i++)
            {
                printf("  ");
            }
            for (i = 1; i <= 2*hang-1; i++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (hang = x; hang>=1; hang--)//第x行到第最后一行
        {
            for(i = 1; i <= x-hang;i++)
            {
                printf("  ");
            }
            for (i = 1; i <= 2*hang-1; i++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}