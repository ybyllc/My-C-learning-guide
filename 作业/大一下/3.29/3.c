	
// ����������������ƽ����p1(x1,x2)��p2(x2,y2)�������꣬���������ľ��������Ҫ����һ����������ƽ���������ľ��롣

// ��������ʽ��(x1,y1),(x2,y2)
// �������ʽ��4λС���ĸ�����
// ���������롿

// (1,2),(6,7)
// �����������

// 7.0711

#include<stdio.h>
#include<math.h>

float d(int x1,int y1,int x2,int y2);

int main()
{
    float x1,x2,y1,y2;
    scanf("(%f,%f),(%f,%f)",&x1,&y1,&x2,&y2);
    printf("%.4f",d(x1,y1,x2,y2));
    return 0;
}

float d(int x1,int y1,int x2,int y2)
{
    float d;
    d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));//���빫ʽAB�0�5=(x1-x2)�0�5+(y1-y2)�0�5
    return d;
}