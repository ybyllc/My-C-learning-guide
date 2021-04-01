	
// 【问题描述】在主函数中输出1！＋2！＋3！＋…＋10！的值。要求将计算阶乘的运算写成函数。

// 【输入形式】无
// 【输出形式】阶乘之和
// 【样例输入】

// 无
// 【样例输出】

// 4037913

#include<stdio.h>

//阶乘 factorial 
int f10();

int main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        sum+=f(i);
    }
    printf("%d",sum);
}

int f(int x)
{
    int i,j,f=1,sum=0;
    for(i=1;i<=x;i++)
    {
            f *= i;
    }
    return f;
}