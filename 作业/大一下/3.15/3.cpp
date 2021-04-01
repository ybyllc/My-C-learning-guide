// 【问题描述】编写函数，判断一个正整数a是否为完数，如果是完数，函数返回值为1；否则为0。

// （完数：一个数的所有因子之和等于该本身，如6、28都是完数；6=1+2+3；28=1+2+4+7+14。）

// 【输入形式】一个正整数
// 【输出形式】输出判断结果，** is wanshu，** is not wanshu
// 【样例输入】

// 28
// 【样例输出】

// 28 is wanshu

#include<stdio.h>
void wan(int a)
{
    int y;
    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            y += i;
        }
    }
    if(y==a) printf("%d is wanshu",y);
    else printf("%d is not wanshu",y);
}

int main()
{
    int x;
    scanf("%d",&x);
    wan(x);
    return 0;
}