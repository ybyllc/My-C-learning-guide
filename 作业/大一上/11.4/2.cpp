/*
【问题描述】输入两点坐标（x1，y1）、（x2，y2），计算并输出两点间的距离。

【输入形式】两个坐标点，中间用逗号隔开
【输出形式】输出两点间的距离，保留小数点后3位
【样例输入】

(1,2),(5,6)
【样例输出】

5.657
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    double s;
    scanf("(%d,%d),(%d,%d)",&x1,&y1,&x2,&y2);
    s=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("%.3f",s);
    return 0;
}