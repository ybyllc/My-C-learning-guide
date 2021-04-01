/*【问题描述】输入n和相应的n个数，求它们的和并输出

【输入形式】

【输出形式】
【样例输入】

4 1 2 3 4
n个数 相应的n个数
4个数 4个数是1，2，3，4
【样例输出】

10
【样例说明】第一个数4表示n的值，后面的数分别表示这4个数*/
#include<stdio.h>

int main()
{
    int n,x,y,i=0;
    scanf("%d",&n);

    while (i<n)
    {
        scanf("%d",&x);
        y+=x;//y=y+x
        i++;//i=i+1
    }

    printf("%d",y);
    return 0;
}