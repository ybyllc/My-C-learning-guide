/*
����������������һ���Իس����������ַ����ֱ�ͳ����ĸ�����������ַ������������ַ�������

��������ʽ��
�������ʽ��
���������롿

a23sw%b
�����������

4,2,1
*/
#include<stdio.h>

int main()
{   
    char ch;
    int digit,others, alph;//���������ĸ�����������ַ������������ַ�����
    digit=others=alph=0;//��ʼ�����������Ƕ�����0
    ch=getchar();				
    while(ch!='\n')//�ڻ��з�֮ǰѭ������
    {   
        if (ch>='0'&&ch<='9')   digit++;//����+1
	    else if (ch>='A' && ch<='Z'||ch>='a' &&ch<='z')  alph++;//��ĸ+1                   
		else  others++;//����+1
        ch=getchar();		
    }
    printf("%d,%d,%d",alph,digit,others);//�����ĸ�����������ַ������������ַ�����
    return 0; 
}
