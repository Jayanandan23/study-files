#include <stdio.h>
int main()
{
        int a[100][100],b[100][100],i,j,r1,k,c1,r2,c2,mult=0,c[100][100];
        printf("Enter the number of rows of first matrix :");
        scanf("%d",&r1);
        printf("Enter the number of coloumns of first matrix:");
        scanf("%d",&c1);
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        printf("Enter the elements:");
                        scanf("%d",&a[i][j]);
                }
        }
        printf("Enter the number of rows of second matrix :");
        scanf("%d",&r2);
        printf("Enter the number of coloumns of second matrix:");
        scanf("%d",&c2);
	if(r1!=c2)
	{
		printf("Invalid matrix \n");
	}
	else
	{
        	for(i=0;i<r1;i++)
        	{
                	for(j=0;j<c1;j++)
                	{
                       		printf("Enter the elements:");
                        	scanf("%d",&b[i][j]);
                	}
        	}
        	for(i=0;i<r1;i++)
        	{
                	for(j=0;j<c2;j++)
                	{
				for(k=0;k<r2;k++)
				{
                       			mult+=a[i][k]*b[k][j];
                		}
				c[i][j]=mult;
				mult=0;
			}
        	}
	
		printf("Product of thr matrix is \n");
        	for(i=0;i<r1;i++)
        	{
                	for(j=0;j<c2;j++)
                	{
                        	printf("%d\t",c[i][j]);
                	}
                	printf("\n");
		}
        }
        return 0;
}
