/*
【问题描述】输入10个学生的成绩，输出最低分数

【输入形式】输入10个浮点数，空格隔开
【输出形式】输出最低分（保留2位小数）
【样例输入】

78 65 99 45 68.5 34.5 90 82.5 23 69
【样例输出】

23.00
*/
#include<stdio.h>

int main()
{   
    int i=0;
    float score,low_score=100;						
    while(i<10)//循环10次
    {   
        scanf("%f",&score);
        if (score<low_score) low_score=score;//选出更低的成绩
        i++; 		
    }
    printf("%.2f",low_score);
    return 0; 
}
