#include <stdio.h>
int main()
{	
	int x;
    int i;
    int hang;
    while (scanf("%d",&x)!=EOF)
    {
        for (hang = 1; hang<=x-1; hang++)//��һ�е���x-1��
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
        for (hang = x; hang>=1; hang--)//��x�е������һ��
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