#include <stdio.h>
int linearsearch(int*arr,int n,int key)
{
	int i;
	for (i=0;i<n;i++)
	{
		if (arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[100],n,key,i;
	printf("Enter the length of array :" );
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the array elements :");
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched : ");
	scanf("%d",&key);
	i=linearsearch(&arr[0],n,key);
	if(i==-1)
	{
		printf("Number not found\n");
	}
	else
	{
		printf("Number found and key found at index %d\n",i);
	}
	return 0;
}
