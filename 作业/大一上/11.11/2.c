/*	
【问题描述】编写程序，输入一个实数后输出该数的绝对值。（用条件表达式实现）

【输入形式】输入一个实数
【输出形式】输出该数的绝对值，保留4位小数
【样例输入】

-8.0927
【样例输出】

8.0927
*/

#include<stdio.h>
#include<math.h>
int main()
{   float a;
    scanf("%f",&a);
    a=fabs(a);
    printf("%.4f",a);
    return 0;
    
}