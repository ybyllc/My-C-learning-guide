	
// 【问题描述】输入平面上p1(x1,x2)、p2(x2,y2)两点坐标，计算两点间的距离输出。要求定义一个函数计算平面上两点间的距离。

// 【输入形式】(x1,y1),(x2,y2)
// 【输出形式】4位小数的浮点数
// 【样例输入】

// (1,2),(6,7)
// 【样例输出】

// 7.0711

#include<stdio.h>
#include<math.h>

float d(int x1,int y1,int x2,int y2);

int main()
{
    float x1,x2,y1,y2;
    scanf("(%f,%f),(%f,%f)",&x1,&y1,&x2,&y2);
    printf("%.4f",d(x1,y1,x2,y2));
    return 0;
}

float d(int x1,int y1,int x2,int y2)
{
    float d;
    d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));//距离公式AB²=(x1-x2)²+(y1-y2)²
    return d;
}