/*
����������������n����Ӧ��n������ͳ����������и������㼰�����ĸ�����

��������ʽ����һ������n���ڶ�������n�������ո����
�������ʽ�����������������ĸ����������������м��ö��ŷָ�
���������롿

10
12 -3 0 -8 25 -1 9 4 0 11
�����������

3,2,5
*/
#include<stdio.h>

int main()
{   
    int x,n,i=0;
    int negative,zero,positive;//�������㣬����
    negative=zero=positive=0;		
    scanf("%d\n",&n);	
    while(i<n)//�ڻ��з�֮ǰѭ������
    {   
        scanf("%d",&x);
        if (x<0) negative++;
        else if (x==0) zero++;
        else if (x>0) positive++;
        /*
        if (x>0)
        {
            positive++;
            continue;
        }
        */
        i++;  		
    }
    printf("%d,%d,%d",negative,zero,positive);//����������㣬����
    return 0; 
}
