//��ڿ�����Ҫѧ�����壬ö�ٺ�λ���㣬��ʵ������
//�ṹ�������ж������
//���������ǰѶ���������ͺ�Ϊһ������
//ö�پ��ǰ�����ֵһ��һ����ȫ���г���
//λ���㣬����һ��λһ��λ������

//������
union �������� {��������ı���};

//������ĳɼ�������һ�����֣�Ҳ�����ǡ������񡱣���ô��������д
#include<stdio.h>

union uscore//uscore����������֣�Ҳ�����Ǽ�������
{
	int score1;
	char fail[10];
};

struct student
{
    char name[10];//����
    union uscore score;//�ɼ�
};

int main()
{
    struct student aaa={"aaa",100};
	struct student bbb={"bbb","������"};
    printf("����   �ɼ�\n");

    printf("%4s%7d\n",aaa.name,aaa.score.score1);
	if (bbb.score.score1 = "������")
	{
		printf("%4s%7s",bbb.name,bbb.score.score1);
	}
	else printf("%4s%7d",bbb.name,bbb.score.score1);
	
    return 0;
}
//�������н����
// ����   �ɼ�
//  aaa    100
//  bbb ������


//ö��
//��������Ҫ��aΪ1,bΪ2,cΪ3,dΪ4,eΪ5,fΪ6
//���ǿ���һ��һ��д
#define a 1
//����Ҳ��������д
#include <stdio.h>
 
enum ALPHA
{
    a=1, b, c, d, e, f//�������a=1������Ĭ�ϴ�0��ʼ
};
 
int main()
{
    enum ALPHA alpha; 
    alpha = b;
    printf("�����ĸ�������%d",alpha);
    return 0;
}

//�����
//�����ĸ�������2