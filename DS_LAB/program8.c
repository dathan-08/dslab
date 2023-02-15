#include<stdio.h>
#define Size 10
int t=-1;
void push(int*,int);
void pop(int*);
void display(int*);
int main()
{
	
	int s[Size],choice,n,c=0;

	
	do
	{
	printf("\nSTACK OPERATIONS");
	printf("\n\t 1.PUSH \n\t 2.POP \n\t 3.DISPLAY\n\t 4.EXIT");
	printf("\n enter choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		if(c==0)
		{
		c++;
		printf("enter the size of the stack[max size is 10]\n");
		scanf("%d",&n);
		
		}
		push(s,n);
		break;
	
	case 2:
	
		pop(s);
		break;
	
	case 3:
	
		display(s);
		break;
	
	case 4:
		
		printf("EXIT!!!!");
		break;
	
	default:
	
		printf("your choice is invallid");
	
	}
	}
	while(choice!=4);
	return 0;
}

/* PUSH */

void push(int* stack,int n)
{
	int ele;
	if(t==n-1)
	{
		printf("\n STACK OVER FLOW\n");
	}
	else
	{
		printf("\nenter the value of element\n");
		scanf("%d",&ele);
		t++;
		stack[t]=ele;
	}
	
	display(stack);
}

/* POP */

void pop(int* stack)
{
	if(t<0)
	{
		printf("\nstack is under flow");
	}
	else
	{
		printf("the element to be poped is %d\n",stack[t]);
		t--;
	}
	display(stack);
}

/* DISPLAY */

void display(int* stack)
{
	int i;
	
	if(t>=0)
	{
		printf("\n the elements in stack is ");

		for(i=t;i>=0;i--)
		{
			printf("\t\n %d",stack[i]);
			
		}
	}
	
	else
	{
		printf("\nSTACK IS EMPTY");
	}
}





Output:



STACK OPERATIONS
	 1.PUSH 
	 2.POP 
	 3.DISPLAY
	 4.EXIT
 enter choice
1
enter the size of the stack[max size is 10]
3

enter the value of element
13

 the elements in stack is 	
 13
STACK OPERATIONS
	 1.PUSH 
	 2.POP 
	 3.DISPLAY
	 4.EXIT
 enter choice
1

enter the value of element
3

 the elements in stack is 	
 3	
 13
STACK OPERATIONS
	 1.PUSH 
	 2.POP 
	 3.DISPLAY
	 4.EXIT
 enter choice
1

enter the value of element
456

 the elements in stack is 	
 456	
 3	
 13
STACK OPERATIONS
	 1.PUSH 
	 2.POP 
	 3.DISPLAY
	 4.EXIT
 enter choice
2
the element to be poped is 456

 the elements in stack is 	
 3	
 13
STACK OPERATIONS
	 1.PUSH 
	 2.POP 
	 3.DISPLAY
	 4.EXIT
 enter choice
3

 the elements in stack is 	
 3	
 13
STACK OPERATIONS
	 1.PUSH 
	 2.POP 
	 3.DISPLAY
	 4.EXIT
 enter choice
4
EXIT!!!!
