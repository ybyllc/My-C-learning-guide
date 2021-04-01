/*
【问题描述】实型数据d保留4位小数（四舍五入）
【样例输入】

5.12346
【样例输出】

5.1235
*/

#include<stdio.h>

int main()
{
    float d,y;
    scanf("%f",&d);
    y=(int)(d*10000+0.5)/10000.0;
    printf("%.4f",y);
    return 0;
}
