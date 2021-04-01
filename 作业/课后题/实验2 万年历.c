#include<stdio.h>

int day_sum(int year,int month)//这个月距离1900年1月的天数
{
    int days;
    for (int i = 1900; i <= year-1;i++)//算到1900到前一年的总天数
    {
        days+=365;
        if((year%4==0&&year%100!=0)||(year%400==0)) days+=1;
    }
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
    case 1:days+=31;break;//输出天数
    }
    return days;
}

int main()
{   
    int i;
    int yy,mm;//年，月
    int day,days;//当月天数，总天数
    int head;//第一天是星期几
    int wei=1;//这个数在第几位
    int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};//当年的月天数
    scanf("%d%d",&yy,&mm);
    if ((yy%4==0&&yy%100!=0)||(yy%400==0)) d[1]=29;//闰年就把d的第二个数变成29

    if (yy>=1900&&mm>=1&&mm<=12)
    {
        days=day_sum(yy,mm);//距离1900年1月的总天数
        head=days%7+1;//算出第一天是星期几
        printf("***************************************\n");
        printf("Sun   Mon   Tue   Wen   Thu   Fri   Sat\n");
        for (i = 1; i <= head;i++)//前面的空格
        {
            printf("      ");
            wei++;
        }
        for (i = 1; i <= d[mm-1];i++)
        {
            printf("%3d   ",i);
            wei++;
            if (wei==8) 
            {
                printf("\n");
                wei=1;
            }
        }
        printf("\n");
        printf("***************************************\n");
    }
    else printf("输入错误！");

    return 0;
}