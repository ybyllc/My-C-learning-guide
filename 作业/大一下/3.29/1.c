/*
������������������x��10��������ƽ��ֵv���ҳ���v�����С������Ԫ�ء�

��������ʽ������10����
�������ʽ�����ƽ��ֵ�Ͳ�ֵ��С������Ԫ��ֵ������2λС����
���������롿

2 3 4 5 6 7 8 9 10 11
�����������

6.50 6.00
*/
#include<stdio.h>
#include<math.h>

int main()
{
    float a[10];
    int i;
    float sum=0;
    float aver,d;
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    aver=sum/10;
    d=a[0];
    for(i=1;i<10;i++)
    {
        d=fabs(aver-a[i])<fabs(aver-d)?a[i]:d;
    }
    printf("%.2f %.2f",aver,d);
    return 0;
}