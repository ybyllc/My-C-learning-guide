// ������������������������һ���Ǹ�����x��һ��������n������x��n�η���ֵ��Ҫ���庯������x��n �η���ֵ��������ʹ��pow������

// ��������ʽ����������һ���Ǹ�����x��һ��������n���м��ö��Ÿ���

// �������ʽ��������������С�����4λ
// ���������롿

// 3.2,4
// �����������

// 104.8576

#include<stdio.h>

float power(float x,int n);

int main()
{
    float a;
    int b;
    scanf("%f,%d",&a,&b);
    printf("%.4f",power(a,b));
    return 0;
}

float power(float x,int n)
{
    int i;
    float y=1;
    for(i=0;i<n;i++)
    {
        y *= x;
    }
    return y;
}