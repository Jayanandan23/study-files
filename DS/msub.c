#include <stdio.h>
int main()
{
        int a[100][100],b[100][100],i,j,row,clmn,sub[100][100];
        printf("Enter the number of rows of first matrix :");
        scanf("%d",&row);
        printf("Enter the number of coloumns of first matrix:");
        scanf("%d",&clmn);
        for(i=0;i<row;i++)
        {
                for(j=0;j<clmn;j++)
                {
                        printf("Enter the elements:");
                        scanf("%d",&a[i][j]);
                }
        }
        printf("Enter the number of rows of second matrix :");
        scanf("%d",&row);
        printf("Enter the number of coloumns of second matrix:");
        scanf("%d",&clmn);
        for(i=0;i<row;i++)
        {
                for(j=0;j<clmn;j++)
                {
                        printf("Enter the elements:");
                        scanf("%d",&b[i][j]);
                }
        }
        printf("Subtracting matrix a from matrix b :\n");
        for(i=0;i<row;i++)
        {
                for(j=0;j<clmn;j++)
                {
                        sub[i][j]=a[i][j]-b[i][j];
                }
        }
        for(i=0;i<row;i++)
        {
                for(j=0;j<clmn;j++)
                {
                        printf("%d\t",sub[i][j]);
                }
                printf("\n");
        }
        return 0;
}
