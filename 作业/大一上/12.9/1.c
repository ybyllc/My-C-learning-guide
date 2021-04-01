/*	
【问题描述】编程，输入年份、月份后，输出该年该月的天数

【输入形式】
【输出形式】
【样例输入】

2000 2
【样例输出】

29
*/
#include<stdio.h>

int main()
{
    int year,month;
    scanf("%d%d",&year,&month);
    switch (month)
    {
    case 12:
    case 10:
    case 8:
    case 7:
    case 5:
    case 3:
    case 1:printf("31");break;

    case 11:
    case 9:
    case 6:
    case 4:printf("30");break;

    case 2:if((year%4==0&&year%100!=0)||(year%400==0))
    {
        printf("29");
        break;
    }
    else
    {
        printf("28");
        break;
    }

    default:printf("error!");break;
    }
    return 0;
}