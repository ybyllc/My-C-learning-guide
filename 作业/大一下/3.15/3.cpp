// ��������������д�������ж�һ��������a�Ƿ�Ϊ�������������������������ֵΪ1������Ϊ0��

// ��������һ��������������֮�͵��ڸñ�����6��28����������6=1+2+3��28=1+2+4+7+14����

// ��������ʽ��һ��������
// �������ʽ������жϽ����** is wanshu��** is not wanshu
// ���������롿

// 28
// �����������

// 28 is wanshu

#include<stdio.h>
void wan(int a)
{
    int y;
    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            y += i;
        }
    }
    if(y==a) printf("%d is wanshu",y);
    else printf("%d is not wanshu",y);
}

int main()
{
    int x;
    scanf("%d",&x);
    wan(x);
    return 0;
}