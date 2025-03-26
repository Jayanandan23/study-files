#include <stdio.h>
int n;
int main()
{
        int a[100],i,op,c;
        printf("Enter the length of array  :");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("Enter the elements of the array  : ");
                scanf("%d",&a[i]);
        }
	do
	{
		printf("press (1) for insertion\n");
        	printf("press (2) for deletion \n");
        	printf("press (3) for traverse\n");
        	printf("press (4) for merging \n");

        	printf("Enter the operator : ");
        	scanf("%d",&op);
        	switch(op)
        	{
                	case 1:
                	{
                        	insert(a);
                        	break;
                	}
                	case 2:
                	{
                        	del(a);
                        	break;
                	}
                	case 3:
                	{
                        	traverse(a);
                        	break;
                	}
                	case 4:
                	{
                        	merge(a);
                        	break;
                	}
		}
		printf("Enter 1 to continue\n");
		scanf("%d",&c);
	}while(c==1);
	return 0;

}
void insert(int a[])
{
        int i,num,pos;
        printf("Enter  the element to insert : ");
        scanf("%d",&num);
        printf("Enter the position to insert:");
        scanf("%d",&pos);
        pos=pos-1;
        for(i=n;i>=pos;i--)
        {
                a[i+1]=a[i];
        }
        a[pos]=num; 
	n++;
        for(i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
}
void del(int a[])
{
	int p,i;
	printf("Enter the position to delete:");
	scanf("%d",&p);
	p=p-1;
	for(i=p;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf(" The updated  array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void traverse(int a[])
{
	int i;
	printf("Traversing the array :");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void merge(int a[])
{
	int b[100],n1,i;
	printf("Enter the length of array  :");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("Enter the element :");
		scanf("%d",&b[i]);
	}
	for(i=n;i<n+n1;i++)
	{
		a[i]=b[i-n];
	}
	n=n+n1;
	printf("After merging:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

