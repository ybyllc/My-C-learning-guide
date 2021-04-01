/*	
【问题描述】输入1～7，输出对应的星期一～星期天。

【输入形式】输入一个整数
【输出形式】如果是1~7之间的整数，输出相对应的星期信息，1对应星期一，7对应星期天；如果是其他整数，输出“error!”
【样例输入】

3
【样例输出】

Wednesday
*/
#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    switch (x)
    {
    case 1:printf("Monday");break;
    case 2:printf("Tuesday");break;
    case 3:printf("Wednesday");break;
    case 4:printf("Thursday");break;
    case 5:printf("Friday");break;
    case 6:printf("Saturday");break;
    case 7:printf("Sunday");break;
    default:printf("error!");break;
    }
    return 0;
}