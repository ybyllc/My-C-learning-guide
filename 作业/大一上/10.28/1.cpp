/*
【问题描述】输入三个数，计算并输出三个数的和与三个数的乘积

【输入形式】
【输出形式】
【样例输入】

2 5 8
【样例输出】

15,80
*/
#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
    x=a+b+c;
    y=a*b*c;
    printf("%d,%d",x,y);
    return 0;
}
