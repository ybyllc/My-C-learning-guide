/*
【问题描述】以hh:mm:ss形式输入当前时间，输出合计时间秒数

【输入形式】
【输出形式】
【样例输入】

4:10:45
【样例输出】

15045
【样例说明】程序运行时在英文状态下输入冒号
*/

#include<stdio.h>
int main()
{
    int h,m,s,ss;
    scanf("%d:%d:%d",&h,&m,&s);
    ss = 3600*h+60*m+s;
    printf("%d",ss);
    return 0;
}