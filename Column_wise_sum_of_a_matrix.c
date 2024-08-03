#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        int sum=0;
        
        for(i=0;i<n;i++)
        {
            sum += matrix[i][j];
        }
       
        printf("%d ",sum);
    }
}