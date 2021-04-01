//胡书畅的作业
//coding: GB18030
/*
【问题描述】求算式前40项的和。

【输入形式】无
【输出形式】前40项之和（保留4位小数）
【样例输入】

无
【样例输出】

0.6808
【样例说明】
【评分标准】
*/
#include<stdio.h>

int main()
{
    float y;
    int sign=1;
    int i;
    for (i = 1; i <= 40; i++)
    {   
        y+=sign*1.0/i;
        sign = -sign;
    }
    printf("%.4f",y);
    return 0;
}