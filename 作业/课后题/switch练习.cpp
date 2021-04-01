#include<stdio.h>
int main()
{
    int c;
    double y;
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        y=100*(1.1*1);
        break;
    case 2:
        y=100*(1.1*2); 
    case 3:
        y=100*(1.1*3);
    
    default:
        break;
    }
    printf("%f",y);
    return 0;
}
