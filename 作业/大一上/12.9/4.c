/*
【问题描述】输入n和相应的n个数，统计输入的数中负数、零及正数的个数。

【输入形式】第一行输入n，第二行输入n个数，空格隔开
【输出形式】输出负数个数、零的个数、正数个数，中间用逗号分隔
【样例输入】

10
12 -3 0 -8 25 -1 9 4 0 11
【样例输出】

3,2,5
*/
#include<stdio.h>

int main()
{   
    int x,n,i=0;
    int negative,zero,positive;//负数，零，正数
    negative=zero=positive=0;		
    scanf("%d\n",&n);	
    while(i<n)//在换行符之前循环输入
    {   
        scanf("%d",&x);
        if (x<0) negative++;
        else if (x==0) zero++;
        else if (x>0) positive++;
        /*
        if (x>0)
        {
            positive++;
            continue;
        }
        */
        i++;  		
    }
    printf("%d,%d,%d",negative,zero,positive);//输出负数，零，正数
    return 0; 
}
