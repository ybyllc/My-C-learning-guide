// ����������������һ���ꡢ�¡��������������ĵڼ��졣Ҫ���庯�������������ռ����ǵڼ���ĺ�����

// ��������ʽ�����������գ��м��ÿո����
// �������ʽ���������ݣ���ʾ���ǵڼ���
// ���������롿

// 2019 5 8
// �����������

// 128

#include <stdio.h>

int days(int year,int month,int day)
{
    int days;
    switch (month-1)//���ϸ��µ�����
    {
    case 11:days+=30;
    case 10:days+=31;
    case 9:days+=30;
    case 8:days+=31;
    case 7:days+=31;
    case 6:days+=30;
    case 5:days+=31;
    case 4:days+=30;
    case 3:days+=31;
    case 2:if((year%4==0&&year%100!=0)||(year%400==0)) days+=29;
           else days+=28;
    case 1:days+=31;
    case 0:days+=day;break;//�������
    
    default:printf("error!");break;
    }
    return days;
}

#include<stdio.h>

int main()
{
    int year,month,day;
    scanf("%d%d%d",&year,&month,&day);
    printf("%d",days(year,month,day));
    return 0;
}