#include<stdio.h>
#include<stdlib.h>
#include<time.h>//��������õ�ʱ��
#include <windows.h>//�ӳ�

char fall()//������ĸ,���������ٶ�,������ĸ
{
    int x,i;
    char a[26]={"abcdefghijklmnopqrstuvwxyz"};
    srand((unsigned)time(0));//�������ʼ��
    x =(rand()%26);//0~25�����
    for (i = 0; i < x;i++)
    {
        printf("   ");
    }
    printf("%c",a[x]);
    return a[x];
}


int main()
{
    char x;
    int start,end;//��ʼ�����ڵ�ʱ��
    start=clock();
    int score=0;//�÷�
    while (1)
    {
        end = clock();
        printf("time:%3d  score: %d\n",(end-start)/CLK_TCK,score);
        x=fall();
        sleep(1);
        system("cls");
    }

    return 0;
}