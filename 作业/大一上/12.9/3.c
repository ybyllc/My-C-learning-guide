/*
【问题描述】输入n和相应的n个数，输出它们中所有奇数的乘积。

【输入形式】第一行输入n，第二行输入n个整数
【输出形式】n个整数中奇数的乘积
【样例输入】

6
3 9 6 5 11 4
【样例输出】

1485
*/
#include<stdio.h>

int main()
{
   int a,n,s=1,i=0;
   scanf("%d/n",&n);
   while(i<n)
   { 
    scanf("%d",&a);
    if (a%2!=0) s*=a;//如果是奇数，s乘上a，s刚开始是1
    i++;
    }
    printf("%d",s);
   return 0; }
