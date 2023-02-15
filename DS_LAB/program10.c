#include<stdio.h>
#define N 5
int rear=0,front=0,c=0;
void enqueue(int*);
void dequeue(int*);
void display(int*);

int main()
{
    int Q[N],choice;
    printf("******CIRCULAR QUEUE OPERATIONS******");
	printf("\n1.Enqueue");
	printf("\n2.Dequeue");
	printf("\n3.Display");
	printf("\n4.Exit");
	

	do
	{
		printf("\nEnter choice (1-4): ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: enqueue(Q);
				break;
			
		    	case 2: dequeue(Q);
				break;
				
			case 3: display(Q);
				break;
			
			case 4: printf("EXIT!!");
				break;
				
			default: printf("Choose a valid option (1-4)!!!"); 
		}
	}
	while(choice!=4);
	return 0;
}

// ENQUEUE
void enqueue(int*Q)
{
    int item;
    if(c==N)
    {
        printf("Overflow!! Circular Queue is Full");
    }
    
    else
    {
        
 	printf("Enter element that to be inserted into a queue: ");
        scanf("%d",&item);
        Q[rear]=item;
        rear=(rear+1)%N;
        c++;
 
        printf("\nElement inserted successfully");
        
    }
    
}

// DEQUEUE

void dequeue(int*Q)
{
	int item;
    if(c==0)
    {
        printf("Circular Queue is empty!!!");
        
    }
    else
    {
        item=Q[front];
    
        front=(front+1)%N;
 
        c--;
    
   // printf("Element deleted successfully from queue!!!");
    printf("\nDeleted element is : %d",item);
    //display();
    }
}

// DISPLAY

void display(int*Q)
{
    int i;
    printf("\nQueue is : ");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",Q[i]);
    }
}
