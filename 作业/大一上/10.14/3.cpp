/*
【问题描述】仿照例1.2编程，输入a、b后，输出一元一次方程ax+b=0的解

【输入形式】输入a，b的值，用空格分隔
【输出形式】
【样例输入】

4 8
【样例输出】

-2
*/
#include <stdio.h>

int main()
{
    int a,b,y;
    a = 4;
    b = 8;
    y = -b/a;
    printf("%d",y);
    return 0;
}