#include<stdio.h>

int main()
{
    int year,month,day,days=0;
    scanf("%d%d%d",&year,&month,&day);
    switch (month-1)//加上个月的天数
    {
    case 11:days+=30;
    case 10:days+=31;
    case 9:days+=30;
    case 8:days+=31;
    case 7:days+=31;
    case 6:days+=30;
    case 5:days+=31;
    case 4:days+=30;
    case 3:days+=31;
    case 2:if((year%4==0&&year%100!=0)||(year%400==0)) days+=29;
           else days+=28;
    case 1:days+=31;
    case 0:days+=day;break;//输出天数
    
    default:printf("error!");break;
    }
    printf("%d",days);
    return 0;
}