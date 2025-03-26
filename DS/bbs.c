#include <stdio.h>
void bs(int a[],int n)
{
	int i,temp,j,swap;
	for(i=0;i<n;i++)
	{
		swap=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swap=1;
			}
		}
		if(swap==0)
		{
			break;
		}
	}
}
int main()
{
	int n,a[100],i;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the array elements: ");
		scanf("%d",&a[i]);
	}
	printf("Before  sorting array \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	bs(a,n);
	printf("After sorting array \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}


