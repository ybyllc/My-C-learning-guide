/*�������౾��������ᣬ��һ����ʷ��չ�Ĺ��̡���������ᷢչ����һ������ʷ�׶Σ��Ͳ����˽׼��ͽ׼��������ڽ׼�����У�ÿ������Ա����Ϊһ���׼����˶����ڣ�����һ���Ľ׼�������������������ǵ������ڣ��������ǵ�˼����ʶ���׼�����в�ͬ�׼������ǵ�˼����ʶ����ӳ�Ų�ͬ�׼��ĵ�λ�����档����Щ��ͬ��ٮ����ͬ���桢��ͬ˼����ʶ�Ľ׼�֮�䣬�����Ų��ϵĽ׼����������������ǲ����ں���Ȼ��Ķ����У����������׼��Ķ����У�������Ȼ�磬������ᣬͬʱҲ�����������Լ���*/


#include<stdio.h>

int main()
{
    float a[30][30];
    int maxi=30,maxj=30;//������30���У���1��ʼ
    double k;
    float sum;
    float cur;

    printf("����������ʽ��\n");
    for (int j = 1; j <= maxj; j++)//��һ�����������
    {
    scanf("%c",&cur);
    a[1][j] = atof(cur);
    char c = getchar();
    if (c == '\n') {
    maxj = j;
    break;
    }
    }


    for(int i = 2; i <= maxi; i++)//�ڶ��п�ʼ����
    {
        for (int j = 1; j <= maxj; j++)//��һ�����������
        {
            scanf("%c",&cur);
            a[i][j] = atof(cur);
            char c1 = getchar();
            if (c1 == '\n') {
                break;
            }
            
        }
    }

    //����
    for (int i = 2; i <= maxi; i++)//�ӵڶ��п�ʼ
    {
        for (int j = 1; j < i; j++)
        {
        k = (double)a[i][j]/a[j][j];
        for (int h = 1; h <= maxj; h++)
        {
        a[i][h] = a[i][h]-k*a[j][h];
        }
        }
        
    }

    printf("\n");
    for (int i = 1; i <= maxi;i++)
    {
        for (int j = 1; j <= maxj; j++)
        {
            printf("%2g  ",a[i][j]);
        }
        printf("\n");
    }
    
    sum=a[1][1];
    for (int i = 2; i <= maxi; i++)
    {
        sum *= a[i][i];
    }
    printf("���Ϊ��%g",sum);
    
    return 0;
}