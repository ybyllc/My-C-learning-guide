/*����������������һ���ٷ��Ƶĳɼ�t�󣬰���ʽ������ĵȼ���Ҫ����swtich�ṹ��̡��ȼ�Ϊ��90��100Ϊ��A����80��89Ϊ��B",70��79Ϊ��C����60��69Ϊ��D����59��0Ϊ��E��

��������ʽ��
�������ʽ��
���������롿

78.5
�����������

C
������˵��������һ��������78.5�������д���ַ�C
*/
#include<stdio.h>

int main()
{   
    float x;
    scanf("%f",&x);
    switch ((int)x/10)
    {
    case 10:
    case 9:printf("A");break;
    case 8:printf("B");break;
    case 7:printf("C");break;
    case 6:printf("D");break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:printf("E");break;
    }
    return 0;
}