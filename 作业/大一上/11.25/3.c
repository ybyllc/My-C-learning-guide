/*【问题描述】输入一个百分制的成绩t后，按下式输出它的等级，要求用if结构编程。等级为：90～100为“A”，80～89为“B",70～79为“C”，60～69为“D”，59～0为“E”

【输入形式】输入一个浮点数
【输出形式】输出相应的等级，如果有错误的话，输出“error！”
【样例1输入】

78.5
【样例1输出】

C
*/

#include<stdio.h>

int main()
{
    float x;
    scanf("%f",&x);
    if(90<=x&&x<=100) printf("A");
    else if(80<=x&&x<90) printf("B");
    else if(70<=x&&x<80) printf("C");
    else if(60<=x&&x<70) printf("D");
    else if(0<=x&&x<60) printf("E");
    else printf("error!");
    return 0;
}