#include<stdio.h>
#include<stdlib.h>
#include<time.h>//给随机数用的时间
#include <windows.h>//延迟

char fall()//下落字母,可以输入速度,返回字母
{
    int x,i;
    char a[26]={"abcdefghijklmnopqrstuvwxyz"};
    srand((unsigned)time(0));//随机数初始化
    x =(rand()%26);//0~25随机数
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
    int start,end;//开始到现在的时间
    start=clock();
    int score=0;//得分
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