/*　　人类本身，人类社会，是一种历史发展的过程。当人类社会发展到了一定的历史阶段，就产生了阶级和阶级斗争。在阶级社会中，每个社会成员都作为一定阶级的人而存在，都在一定的阶级斗争的条件下生活，人们的社会存在，决定人们的思想意识。阶级社会中不同阶级的人们的思想意识，反映着不同阶级的地位和利益。在这些不同地佼、不同利益、不同思想意识的阶级之间，进行着不断的阶级斗争。这样，人们不但在和自然界的斗争中，而且在社会阶级的斗争中，改造自然界，改造社会，同时也改造着人们自己。*/


#include<stdio.h>

int main()
{
    float a[30][30];
    int maxi=30,maxj=30;//上限是30行列，从1开始
    double k;
    float sum;
    float cur;

    printf("请输入行列式：\n");
    for (int j = 1; j <= maxj; j++)//第一行输入的列数
    {
    scanf("%c",&cur);
    a[1][j] = atof(cur);
    char c = getchar();
    if (c == '\n') {
    maxj = j;
    break;
    }
    }


    for(int i = 2; i <= maxi; i++)//第二行开始输入
    {
        for (int j = 1; j <= maxj; j++)//第一行输入的列数
        {
            scanf("%c",&cur);
            a[i][j] = atof(cur);
            char c1 = getchar();
            if (c1 == '\n') {
                break;
            }
            
        }
    }

    //计算
    for (int i = 2; i <= maxi; i++)//从第二行开始
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
    printf("结果为：%g",sum);
    
    return 0;
}