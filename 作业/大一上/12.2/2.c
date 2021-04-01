/*【问题描述】

输入三角形的三条边长a、b、c，计算并输出三角形的面积。要求判断输入的三条边a、b、c三个数是否能构成三角，如果不能构成三角形，则输出提示信息告诉用户。

【输入形式】输入3个实数
【输出形式】如果能构成三角形，则输出三角形的面积，保留3位小数，如果不能构成三角形，输入"error!"
【样例1输入】

3 4 5
【样例1输出】

6.000
*/
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s;
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c&&b+c>a&&a+c>b)
    {
        s=(a+b+c)/2;
        s=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%.3f",s);
    }
    else
    {
        printf("error!");
    }
    return 0;
}