/*
����������������ʵ�ͱ���x������������y��С������֮��
���������롿
3.13 5.89
�����������
3.89
*/
#include<stdio.h>

int main()
{
    float x,y,z;
    scanf("%f%f",&x,&y);
    z=(int)x+y-(int)y;
    printf("%.2f",z);
    return 0;
}