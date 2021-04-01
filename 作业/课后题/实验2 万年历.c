#include<stdio.h>

int day_sum(int year,int month)//����¾���1900��1�µ�����
{
    int days;
    for (int i = 1900; i <= year-1;i++)//�㵽1900��ǰһ���������
    {
        days+=365;
        if((year%4==0&&year%100!=0)||(year%400==0)) days+=1;
    }
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
    case 1:days+=31;break;//�������
    }
    return days;
}

int main()
{   
    int i;
    int yy,mm;//�꣬��
    int day,days;//����������������
    int head;//��һ�������ڼ�
    int wei=1;//������ڵڼ�λ
    int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};//�����������
    scanf("%d%d",&yy,&mm);
    if ((yy%4==0&&yy%100!=0)||(yy%400==0)) d[1]=29;//����Ͱ�d�ĵڶ��������29

    if (yy>=1900&&mm>=1&&mm<=12)
    {
        days=day_sum(yy,mm);//����1900��1�µ�������
        head=days%7+1;//�����һ�������ڼ�
        printf("***************************************\n");
        printf("Sun   Mon   Tue   Wen   Thu   Fri   Sat\n");
        for (i = 1; i <= head;i++)//ǰ��Ŀո�
        {
            printf("      ");
            wei++;
        }
        for (i = 1; i <= d[mm-1];i++)
        {
            printf("%3d   ",i);
            wei++;
            if (wei==8) 
            {
                printf("\n");
                wei=1;
            }
        }
        printf("\n");
        printf("***************************************\n");
    }
    else printf("�������");

    return 0;
}