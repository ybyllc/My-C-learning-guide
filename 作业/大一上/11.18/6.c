/*
【问题描述】输入一个int类型变量x，如果是偶数输出"yes"，否则输出"no"
【样例输入】
48
【样例输出】
yes
*/
#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
