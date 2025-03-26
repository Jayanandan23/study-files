#include <stdio.h>
void insertionsort(int arr[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key =arr[i];
	        j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
}
int main()
{
	int arr[100],n,i;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	printf("After sorting\n");
	insertionsort(arr,n);
	printarray(arr,n);
	return 0;
}

