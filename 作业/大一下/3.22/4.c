// ����������������һ��������������nת����������ʽ������ڼ���nֵ0��6�ֱ�ת����Sunday��Monday������Saturday��

// ��������ʽ������һ��0~6֮�������
// �������ʽ�����ڼ�
// ���������롿

// 6
// �����������

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