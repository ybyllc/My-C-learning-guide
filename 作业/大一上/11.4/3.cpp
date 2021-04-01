/*
【问题描述】编写程序，计算球体积并输出它的值。要求输入半径值，计算结果保留三位小数。

【输入形式】输入一个浮点数（球的半径)
【输出形式】输出体积值，保留三位小数
【样例输入】

4.5
【样例输出】

v=381.510
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double r,v;
    scanf("%lf",&r);
    v = 4.0/3.0*3.14*pow(r,3);
    printf("v=%.3f",v);
    return 0;
}