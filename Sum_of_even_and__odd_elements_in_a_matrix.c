#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum_even=0,sum_odd=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(matrix[i][j]%2==0)
            {
                sum_even+=matrix[i][j];
            }
            else
            {
                sum_odd+=matrix[i][j];
            }
        }
    }
    printf("%d ",sum_even);
    printf("%d",sum_odd);
    return 0;
}