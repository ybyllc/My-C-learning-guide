	
// ������������������������������ǵ���Сֵ��Ҫ����һ����������������������Сֵ��

// ��������ʽ���������������ö��ŷָ�
// �������ʽ��������С���Ǹ���
// ���������롿

// 3.4,8.2,5.6
// �����������

// 3.4

#include<stdio.h>

float min(float a, float b)
{
    float y;
    y = a<b?a:b;
    return y;
}

int main()
{
    float a,b,c;
    scanf("%f,%f,%f",&a,&b,&c);
    printf("%.1f",min(a,min(b,c)));
    return 0;
}
