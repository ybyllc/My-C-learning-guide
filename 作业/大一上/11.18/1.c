/*【问题描述】编写程序，将d天h小时m分钟换算成分钟，输入d、h、m，输出换算结果。
【样例输入】
3 16 43
【样例输出】
5323
*/
#include<stdio.h>

int main()
{
    int d,h,m,t;
    scanf("%d%d%d",&d,&h,&m);
    t=d*24*60+h*60+m;
    printf("%d",t);
    return 0;
}