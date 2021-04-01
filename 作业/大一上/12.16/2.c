//胡书畅的作业
//coding: GB18030
/*
【问题描述】用循环语句输出26个大写字母及它们的ASCII码值。

【输入形式】无
【输出形式】26个大写字母及其ASCII码，中间用逗号分隔
【样例输入】

无
【样例输出】

A,65
B,66
......
......
......
Z,90
*/
#include<stdio.h>

int main()
{
    int i;
    for(i=65;i<=90;i++)
    {
        printf("%c,%d\n",i,i);
    }
    return 0;
}