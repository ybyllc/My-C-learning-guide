/*
【问题描述】

输入x、y，计算f(x,y)的函数值。 f(x,y)定义如下：
f(x,y)= x^2+y^2 x>=0 y>=0
        x^2-y^2 x<0 y<0
        x+y     x>=0 y<0
        x-y     x<0 y>=0
【输入形式】输入x和y的值，中间用逗号分隔
【输出形式】输出函数值，按实际情况输出
【样例1输入】

8,-3
【样例1输出】

5
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,f;  zaq
    scanf("%d,%d",&x,&y);
    if(x>=0&&y>=0)
    {
        f=pow(x,2)+pow(y,2);
        printf("%d",f);
    }
    if(x<0&&y<0)
    {
        f=pow(x,2)-pow(y,2);
        printf("%d",f);
    }
    if(x>=0&&y<0)
    {
        f=x+y;
        printf("%d",f);
    }
    if(x<0&&y>=0)
    {
        f=x-y;
        printf("%d",f);
    }
    return 0;
}