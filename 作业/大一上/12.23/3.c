/*	
����������������������a��b�����a��b֮����������֮��

��������ʽ������2��������
�������ʽ�������2����֮�����е�����֮��
���������롿

1 100
�����������

1060
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    int sum;
    scanf("%d%d",&a,&b);
    int i,n;
	int flag;
	for(n=a;n<=b;n++)
	{
		flag=0;
		if(n==1) flag = 1;
		else
		{
			for(i=2;i<=sqrt(n);i++)
			{
				if(n%i==0)
					{
						flag=1;
						break;
					}
			}
		}
		if(flag==0) sum+=n;
	}
    printf("%d",sum);
	return 0;
}