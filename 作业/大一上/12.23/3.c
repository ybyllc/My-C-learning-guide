/*	
【问题描述】输入正整数a、b，输出a、b之间所有素数之和

【输入形式】输入2个正整数
【输出形式】输出这2个数之间所有的素数之和
【样例输入】

1 100
【样例输出】

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