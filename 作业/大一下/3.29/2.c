// 【问题描述】输入两个数，一个是浮点数x，一个是整数n，计算x的n次方的值。要求定义函数计算x的n 次方的值。（不能使用pow函数）

// 【输入形式】两个数，一个是浮点数x，一个是整数n，中间用逗号隔开

// 【输出形式】计算结果，保留小数点后4位
// 【样例输入】

// 3.2,4
// 【样例输出】

// 104.8576

#include<stdio.h>

float power(float x,int n);

int main()
{
    float a;
    int b;
    scanf("%f,%d",&a,&b);
    printf("%.4f",power(a,b));
    return 0;
}

float power(float x,int n)
{
    int i;
    float y=1;
    for(i=0;i<n;i++)
    {
        y *= x;
    }
    return y;
}