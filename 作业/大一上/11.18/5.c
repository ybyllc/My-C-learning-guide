/*
�����������������ͱ���k���ұߵ�nλ�ϵ�����
���������롿
3427809,3
�����������
8
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int k,n,y;
    scanf("%d,%d",&k,&n);
    y=k/(int)pow(10,n-1)%10;
    printf("%d",y);
    return 0;   
}