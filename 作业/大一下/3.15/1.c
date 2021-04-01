//f(x)=1 x>0,0 x=0,-1 x<0
//定义成函数
// 【样例输入】
// 5.3
// 【样例输出】
// 1

#include<stdio.h>
void fx(double x)
{
    if (x>0) printf("1");
    if (x==0) printf("0");
    if (x<0) printf("-1");
}

int main()
{
    double x;
    scanf("%lf",&x);
    fx(x);
    return 0;
}
