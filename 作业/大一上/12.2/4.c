/*	
【问题描述】输入一个正整数，求它的所有数字之和。

【输入形式】输入一个正整数
【输出形式】各位数字之和
【样例输入】

365
【样例输出】

14
*/
#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    while (x>0)
    {
        y+=x%10;
        x=x/10;
    }
    printf("%d",y);
    return 0;    
}