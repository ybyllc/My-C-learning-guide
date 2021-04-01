/*
【问题描述】已知等差数列的第一项为a，公差为d，求前n项之和，a、d、n由键盘输入 （求和公式：s=n*a+n*(n-1)*d/2）

【输入形式】
【输出形式】
【样例输入】

1 3 100
【样例输出】

14950
【样例说明】a,d,n的值分别为1，3，100，输入时用空格分隔
*/

#include <stdio.h>

int main()
{
    int a,d,n,s;
    scanf("%d%d%d",&a,&d,&n);
    s=n*a+n*(n-1)*d/2;
    printf("%d",s);
    return 0;
}