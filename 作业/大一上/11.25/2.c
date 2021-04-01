/*
【问题描述】

用if语句编程序，输入x后按下式计算y值，并输出结果。

　　　　　x+2*x^2 +10    0≤x≤8
      y＝
　       x-3*x^3-9     x＜0 或 x＞8


【输入形式】输入x的值，一个浮点数
【输出形式】输出y的值
【样例输入】

4.5
【样例输出】

55
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    if (0<=x&&x<=8)
    {
        y=x+2*pow(x,2)+10;
        printf("%d",y);
    }
    if (x<0||x>8)
    {
        y=x-3*pow(x,3)-9;
        printf("%d",y);
    }
    return 0;
}