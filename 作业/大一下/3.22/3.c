// 【问题描述】输入一个年、月、日输出它是这年的第几天。要求定义函数，根据年月日计算是第几天的函数。

// 【输入形式】输入年月日，中间用空格隔开
// 【输出形式】整数数据，表示这是第几天
// 【样例输入】

// 2019 5 8
// 【样例输出】

// 128

#include <stdio.h>

int days(int year,int month,int day)
{
    int days;
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
    return days;
}

#include<stdio.h>

int main()
{
    int year,month,day;
    scanf("%d%d%d",&year,&month,&day);
    printf("%d",days(year,month,day));
    return 0;
}