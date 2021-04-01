// 【问题描述】输入一个正整数，输出该数的各个数字之和。要求编写函数，计算整数的各个数字之和。

// 【输入形式】一个正整数
// 【输出形式】该正整数的各个数字之和
// 【样例输入】

// 345
// 【样例输出】

// 12

#include<stdio.h>

int sum(int x)
{
    int y=0;
    while(x!=0)
    {
        y += x%10;
        x = x/10;
    }
    return y;
}

int main()
{
    int x,y;
    scanf("%d",&x);
    y = sum(x);
    printf("%d",y);
    return 0;
}