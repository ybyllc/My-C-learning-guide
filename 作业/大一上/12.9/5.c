/*
����������������10��ѧ���ĳɼ��������ͷ���

��������ʽ������10�����������ո����
�������ʽ�������ͷ֣�����2λС����
���������롿

78 65 99 45 68.5 34.5 90 82.5 23 69
�����������

23.00
*/
#include<stdio.h>

int main()
{   
    int i=0;
    float score,low_score=100;						
    while(i<10)//ѭ��10��
    {   
        scanf("%f",&score);
        if (score<low_score) low_score=score;//ѡ�����͵ĳɼ�
        i++; 		
    }
    printf("%.2f",low_score);
    return 0; 
}
