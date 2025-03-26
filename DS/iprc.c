#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#define MAX 100
int top=-1;
char stack[MAX];
int isfull()
{
        return top==MAX-1;
}
int isEmpty()
{
        return top==-1;
}
void push(char item)
{
        if(isfull())
        {
                return 0;
        }
        top++;
        stack[top]=item;
}
int pop()
{
        if(isEmpty())
        {
                return INT_MIN;
	}
	return stack[top--];
}
int peek()
{
	if(isEmpty())
	{
		return INT_MIN;
	}
	return stack[top];
}
int checkifoperand(char ch)
{
	return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z');
}
int precedence(char ch)
{
	switch(ch)
	{
		case'+':
		case'-':
			return 1;
		case'*':
                case'/':
                        return 2;
		case'^':
			return 3;
	}
	return -1;
}
int getpostfix(char*expression)
{
	int i,j;
	for(i=0;j=-1;expression[i];i++)
	{
		if(checkifoperand(expression[i]))
		{
			expression[++j]=expression[i];
		}
		else if(expression[i])=='(')
		{
			push(expression[i]);
		}
		else if(expresssion[i]==')')
		{
			while(isEmpty(stack)&&peek(stack)!='(')
			{
				expression[++j]=pop(stack);
			}
			if(!isEmpty(stack)&&peek(stack)!='(')
			{
				return -1;
			}
			else
			{
				pop(stack);
			}
		}
		else
		{
			while(!isEmpty(stack)&&precedence(expression[i]<=precedence(peek(stack)))
			{
				expression[++j]=pop(stack);
			}
			push(expression[i]);
		}
	}
	while(!isEmpty(stack))
	{
		expression[++j]=pop(stack);
	}
	expression[++j]='\0';
}
void reverse(char*exp)
{
	int size=strlen=strlen(exp);
	int j=size,i=0;
	char temp[j--]='\0';
	while(exp[i]!='\0')
	{
		temp[j]=exp[j];
		j--;
		i++;
	}
	strcpy(exp,temp)
}
void brackets(char*exp)
{
	int i=0;
	while(exp[i]!='\0')
	{
		if(exp[i]=='(')
		{
			exp[i]=='(');
		}
		else if(exp[i]==')')
		{
			exp[i]='(';
		}
		i++;
	}
}
voidinfixtoprefix(char*exp)
{
	int size=strlen(exp);
	reverse(exp);
	brackets(exp);
	reverse(exp);
}

int main()
{
	char expression[100];
	printf("The infix is :");
	scanf("%s",expression);
	printf("%s\n",expression);
	infixtoprefix(expression);
	printf("The prefix is :");
	printf("%s\n",expression);
	return 0;
}
































