// ����������������һ��������������nת����������ʽ������ڼ���nֵ0��6�ֱ�ת����Sunday��Monday������Saturday��

// ��������ʽ������һ��0~6֮�������
// �������ʽ�����ڼ�
// ���������롿

// 6
// �����������

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