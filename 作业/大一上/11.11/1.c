/*	
����������������3���ַ��󣬰����ַ�ASCII���С�����˳�������Щ�ַ���
��������ʽ����������3���ַ����м�û���κηָ���
�������ʽ������С����˳�������3���ַ�
���������롿
xta
�����������
atx
*/

#include<stdio.h>
int main()
{   /*int a,b,c,m,n,k;
    scanf("%d%d%d",&a,&b,&c);
    m=a>b?a:b;
    m=m>c?m:c;//���ֵ
    n=a<b?a:b;
    n=n<c?n:c;//��Сֵ
    k=a+b+c-m-n;//�м�ֵ
    printf("%d %d %d\n",m,k,n);
    return 0;*/

    char a,b,c,m,n,k;
    //a = 'c';
    //b = 'b';
    //c = 'a';
    scanf("%c%c%c",&a,&b,&c);//�������ĸ֮�䲻�ÿո�
    //a = getchar()
    //b = getchar();
    //c = getchar();
    m=a>b?a:b;
    m=m>c?m:c;//���ֵ
    n=a<b?a:b;
    n=n<c?n:c;//��Сֵ
    k=a+b+c-m-n;//�м�ֵ
    printf("%c%c%c",n,k,m);
    return 0;
    
}