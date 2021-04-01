	
// 【问题描述】输入三个数，输出它们的最小值。要求定义一个函数，返回两个数的最小值。

// 【输入形式】输入三个数，用逗号分隔
// 【输出形式】返回最小的那个数
// 【样例输入】

// 3.4,8.2,5.6
// 【样例输出】

// 3.4

#include<stdio.h>

float min(float a, float b)
{
    float y;
    y = a<b?a:b;
    return y;
}

int main()
{
    float a,b,c;
    scanf("%f,%f,%f",&a,&b,&c);
    printf("%.1f",min(a,min(b,c)));
    return 0;
}
