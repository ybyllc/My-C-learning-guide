/*【问题描述】输入一个百分制的成绩t后，按下式输出它的等级，要求用swtich结构编程。等级为：90～100为“A”，80～89为“B",70～79为“C”，60～69为“D”，59～0为“E”

【输入形式】
【输出形式】
【样例输入】

78.5
【样例输出】

C
【样例说明】输入一个浮点数78.5，输出大写的字符C
*/
#include<stdio.h>

int main()
{   
    float x;
    scanf("%f",&x);
    switch ((int)x/10)
    {
    case 10:
    case 9:printf("A");break;
    case 8:printf("B");break;
    case 7:printf("C");break;
    case 6:printf("D");break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:printf("E");break;
    }
    return 0;
}