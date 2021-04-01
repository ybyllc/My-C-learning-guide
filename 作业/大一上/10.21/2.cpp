/*
【问题描述】从键盘输入一个大写字母，在屏幕上输出对应的小写字母
【输入形式】
【输出形式】
【样例输入】

A
【样例输出】

a
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char x;
    x=getchar();//scanf("%c",&x);
    
    x = tolower(x);//x = x + 32;

    putchar(x);//printf("%c",x);
    return 0;
}