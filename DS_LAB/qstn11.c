#include<stdio.h>
#include<stdlib.h>
int n,c=0,choice;
struct node
{
	int data;
	struct node *next;

}*head;

void create();
void insert_f();
void disp();
void insert_p();
void deleteF();
void delete_b();
void search();

int main()
{
	
	 do
	{
  	printf("\n1.Create a linked list\n2.insert at first\n3.Dispaly\n4.Insert an element after a particular node\n5.searching\n6.Exit\n");
 	printf("\nEnter Your choice" );
  	scanf("%d",&choice);
  
  	switch(choice)
  	{
    
   		case 1: 
    
    			if(c==0)
    			{	
    				printf("enter the size of linked_list\n");
				scanf("%d",&n);
    		 		create();
    		 		c=c+1;
    				}
    	     		else
    	     		{
    	     	  		printf("linked list is already created\n");
    	     		}
    	    	 	break;
    	    
    	    
     		case 2: 
    			insert_f();
    	    		break;
    	    	
    		case 3: 
    			disp();
    	    		break;
    	  
    	  
     		case 4: 
     			insert_p();
     			break;
     		case 5:
     			deleteF();
     			break;
     		
     		case 6: delete_b();
     			break;
     			
     		case 7: search();
     			break;
    			
    		case 8:	
    			printf("\nexit\n");
    			break;
    		
    		
     		default:printf("enter the valid option 1-7\n");
    		
            
    	}
   	}while(choice!=8);
    
	return 0;
}

void create()
{	
	int i,val;
	struct node *ptr;
	
	
	printf("enter the  value1 \n");
	scanf("%d",&val);
	head=malloc( sizeof(struct node));
	head->data = val;
	head->next=NULL;
	ptr=head;
	
	for(i= 2; i <= n1; i++)
	{
		struct node *temp=malloc( sizeof(struct node));
		printf("enter the value%d\n",i);
		scanf("%d",&val);

		
		temp->data = val;
		temp->next=NULL;
		
		ptr->next=temp;
		ptr=ptr->next;
		
		
	}
}
void insert_f()
{
	int item;
	struct node *temp=malloc(sizeof(struct node));
	
	
	if(temp==NULL)
	{
		printf("Memory insufficient");
		exit(0);
		
	}
	printf("enter the element to be inserted");
	scanf("%d",&item);

	temp->data=item;
	
	if(head== NULL)
	{
		printf("The List is empty so,the element will be inserted in the first position\n");
		temp->next=NULL;
		head=temp;
	
	}
	
	else
	{
		temp->next=head ;
		head=temp;
	}
	
}
void disp()
{
	struct node *ptr;
	ptr=head;
	printf("Data on the Linked List\n");
	while(ptr!=NULL)
	{
		
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	
	
}
void insert_p()
{ 

	int item,key;
	struct node *ptr;
	
	struct node *temp=malloc(sizeof(struct node));
	
	
	if(temp==NULL)
	{
		printf("Memory insufficient!!");
		exit(0);
	}
	
	printf("Enter the item to be inserted");
	scanf("%d",&item);
	printf("Enter the position to be inserted");
	scanf("%d",&key);
	
	temp->data=item;
	
	if(head== NULL)
	{
		printf("The List is empty so,the element will be inserted in the first position\n");
		temp->next=NULL;
		head=temp;
	
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			if(ptr->data == key)
			{
				temp->next=ptr->next;
				ptr->next= temp;
				printf("The data is inserted in %d location\n",key);
				break;
			}
			else
			{
				ptr=ptr->next;
			}
		}
	}
}


void deleteF()
{
    if(head==NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        ptr=head;
        head=head->next;
        free(ptr);
        printf("\nElement deleted successfully");
    }
}
void delete_b()
{
	if(head==NULL)
    {
        printf("\nUnderflow");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        free(ptr);
        printf("Element deleted successfully");
    }
}


void search()
{
	struct node *ptr;
	ptr=head;
	int value,flag=0;
	printf("Enter the value to be searched");
	scanf("%d",&value);
	while(ptr->next!=NULL)
	{
		if(ptr->data==value)
		{
			flag=1;
			printf("Item present in Location ");
			break;
		}
		else
		{
			ptr=ptr->next;
		}
	}
	
	if(flag==0)
	{
		printf("Item is not present");
	}
	
}











