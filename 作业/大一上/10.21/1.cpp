/*
【问题描述】参考例2.1 输入两个字符，输出字符的ASCII值。

【输入形式】按样例输入2个字符，字符间没有空格 
【输出形式】输出这2个字符的ASCII值

【样例输入】

ab
【样例输出】

97,98
【样例说明】97，98之间用逗号分隔，逗号在英文状态下输入
*/

#include <stdio.h>
int main()
{
    char x,y;
    x = getchar();
    y = getchar();
    //scanf("%c%c",&x,&y);
    printf("%d,%d",x,y);
    return 0;
}