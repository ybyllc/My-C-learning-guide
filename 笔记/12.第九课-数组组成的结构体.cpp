//��ʵ���Ƕ���һ�ְѲ�ͬ���͵ı��������һ��Ķ���
struct �ṹ������
{
    �ṹ��ı���
};
//����ѧ������Ϣ
struct student
{   int number;//ѧ��
    char name[10];//���������4����
    float score[3];//�ɼ���3��
    };//�ǵö������Ҫ�ֺ�;����

//����һ���µĽṹ��
student s1={20920��������100};

//�ṹ���ʹ��
s1.number    //s1���number����


//�Խṹ������������Ҫ��������
��:  student stud2,stud1={1041101,��li si��};  

// int a[]
// a={ѧ����20920��100}

//�����������
struct ѧ��
{   int ѧ��;
    char ����[10];
    float �ɼ�[3];
    };

//�õ�ʱ�����

ѧ�� ����={209200101,����,100}

//�ṹ����ô�ã�����student.name���ṹ������.��������



//���ӣ�
#include<stdio.h>

struct student
{   int number;//ѧ��
    char name[10];//���������4����
    int score[3];//�ɼ���3��
};

int main()
{
    struct student abc={1,"abc",100,99,99};//һ����abc��student�ṹ
    printf("ѧ��   ����   �ɼ�1   �ɼ�2   �ɼ�3\n");
    printf("%4d%7s%8d%8d%8d",abc.number,abc.name,abc.score[0],abc.score[1],abc.score[2]);
    return 0;
}

//�������У�
//ѧ��   ����   �ɼ�1   �ɼ�2   �ɼ�3
//  1    abc    100      99      99