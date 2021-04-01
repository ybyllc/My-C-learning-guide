// 【问题描述】定义一个函数将正整数n转换成文字形式输出星期几（n值0～6分别转换成Sunday，Monday，…，Saturday）

// 【输入形式】输入一个0~6之间的整数
// 【输出形式】星期几
// 【样例输入】

// 6
// 【样例输出】

// Saturday

#include<stdio.h>

void week(int a)
{
    switch(a)
    {
        case 1:printf("Monday");break;
        case 2:printf("Tuesday");break;
        case 3:printf("Wednesday");break;
        case 4:printf("Thursday");break;
        case 5:printf("Friday");break;
        case 6:printf("Saturday");break;
        case 0:printf("Sunday");break;
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    week(a);
    return 0;
}