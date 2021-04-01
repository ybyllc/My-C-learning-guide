/*
【问题描述】求整型变量k的右边第n位上的数字
【样例输入】
3427809,3
【样例输出】
8
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int k,n,y;
    scanf("%d,%d",&k,&n);
    y=k/(int)pow(10,n-1)%10;
    printf("%d",y);
    return 0;   
}