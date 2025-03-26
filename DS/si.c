#include <stdio.h>
int stack[100],i,n,top=-1,choice=0;
void push()
{
	int val;
	if(top==n)
	{
		printf("Over flow \n");
	}
	else
	{
		printf("Enter the value \n");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		top=top-1;
	}
}
void show()
{
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
	if(top==-1)
	{
		printf("stack is empty \n");
	}
}
void main()
{
	printf("Enter the number of elements in the stack :");
	scanf("%d",&n);
	printf("Stack operation using array \n");
	while(choice!=4)
	{
		printf("Choose one from the below \n");
		printf("\n 1.push \n 2.pop \n 3.show \n 4.exit\n");
		printf("Enter your choice :  ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
                        {
                                pop();
                                break;
                        }
			case 3:
                        {
                                show();
                                break;
                        }
			case 4:
                        {
                                printf("Exiting");
                                break;
                        }
			default :
                        {
                                printf("Please enter the valid choice : ");
                        }
		}
	}
}




