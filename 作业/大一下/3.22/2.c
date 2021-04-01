// 【问题描述】在主函数中输入字符c和m，调用函数prn，连续将字符c输出m次。定义函数prn，完成连续将某个字符c输出m次后换行。

// 【输入形式】一个字符，一个整数
// 【输出形式】字符重复输出6次并换行
// 【样例输入】

// #6
// 【样例输出】

// ######

#include<stdio.h>

void prn(char c,int m);

int main()
{

    char c;
    int m;
    scanf("%c%d",&c,&m);
    prn(c,m);
    return 0;
}

void prn(char c,int m)
{   
    int i;
    for(i=0;i<m;i++)
    {
        printf("%c",c);
    }
    printf("\n");
}