/*
【问题描述】计算实型变量x的整数部分与y的小数部分之和
【样例输入】
3.13 5.89
【样例输出】
3.89
*/
#include<stdio.h>

int main()
{
    float x,y,z;
    scanf("%f%f",&x,&y);
    z=(int)x+y-(int)y;
    printf("%.2f",z);
    return 0;
}