// ���������������������������ַ�c��m�����ú���prn���������ַ�c���m�Ρ����庯��prn�����������ĳ���ַ�c���m�κ��С�

// ��������ʽ��һ���ַ���һ������
// �������ʽ���ַ��ظ����6�β�����
// ���������롿

// #6
// �����������

// ######

#include<stdio.h>

void prn(char c,int m);

int main()
{

    char c;
    int m;
    scanf("%c%d",&c,&m);
    prn(c,m);
    return 0;
}

void prn(char c,int m)
{   
    int i;
    for(i=0;i<m;i++)
    {
        printf("%c",c);
    }
    printf("\n");
}