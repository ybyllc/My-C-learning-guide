/*【问题描述】求数列的和。设数列的首项为81，以后各项为前一项的平方根（如81，9，3，1.732，…），求前20项和

【输入形式】无
【输出形式】前20项之和，保留3位小数
【样例输入】

无
【样例输出】

111.336
*/
#include<stdio.h>
#include<math.h>

int main()
{
    float a,sum;
    a=sum=81;
    int i;
    for (i = 0; i < 19;i++){
        a=pow(a,0.5);
        sum+=a;
    }
    printf("%.3f",sum);
    return 0;
}