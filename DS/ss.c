#include <stdio.h>
void selection(int arr[],int n)
{
        int i,j,small,temp;
        for(i=0;i<n-1;i++)
        {
                small=i;
                for(j=i+1;j<n;j++)
                {
                        if(arr[j]<arr[small])
                        {
                                small=j;
                        }
		}
       		temp=arr[small];
       		arr[small]=arr[i];
       		arr[i]=temp;

        }

}
void printarr(int a[],int n)
{
        int i;
        for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
int main()
{
	int a[100],n,i;
	printf("Enter the number of elements in the array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the array elements :");
		scanf("%d",&a[i]);
	}
	printf("Before sorting array elements are : \n");
	printarr(a,n);
	selection(a,n);
	printf("After sorting array elements are: \n");
	printarr(a,n);
	return 0;
}

