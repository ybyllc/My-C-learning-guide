// 【问题描述】定义一个函数将正整数n转换成文字形式输出星期几（n值0～6分别转换成Sunday，Monday，…，Saturday）

// 【输入形式】输入一个0~6之间的整数
// 【输出形式】星期几
// 【样例输入】

// 6
// 【样例输出】

// Saturday

#include<stdio.h>

char week(int a)
{
    char week[20];
    switch(a)
    {
        case 1:week="Monday";break;
        case 2:week="Tuesday";break;
        case 3:week="Wednesday";break;
        case 4:week="Thursday";break;
        case 5:week="Friday";break;
        case 6:week="Saturday";break;
        case 0:week="Sunday";break;
    }
    return week;
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%s",week(a));
    return 0;
}