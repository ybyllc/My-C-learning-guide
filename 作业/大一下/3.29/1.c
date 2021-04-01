/*
【问题描述】在数组x的10个数中求平均值v，找出与v相差最小的数组元素。

【输入形式】输入10个数
【输出形式】输出平均值和差值最小的数组元素值，保留2位小数。
【样例输入】

2 3 4 5 6 7 8 9 10 11
【样例输出】

6.50 6.00
*/
#include<stdio.h>
#include<math.h>

int main()
{
    float a[10];
    int i;
    float sum=0;
    float aver,d;
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    aver=sum/10;
    d=a[0];
    for(i=1;i<10;i++)
    {
        d=fabs(aver-a[i])<fabs(aver-d)?a[i]:d;
    }
    printf("%.2f %.2f",aver,d);
    return 0;
}