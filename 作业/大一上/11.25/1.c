/*【问题描述】输入一个实数，输出它的平方根值，如果输入数小于0，则输出“The number is error!”的提示。

【输入形式】输入一个实数


【样例输入】

578.9
【样例输出】

24.0603
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float x,y;//输入的数,输出的平方根
    scanf("%f",&x);
    if(x<0)
    {
        printf("The number is error!");
    }
    else
    {
        y=sqrt(x);
        printf("%.4f",y);
    }
    return 0;
}