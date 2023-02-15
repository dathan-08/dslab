#include<stdio.h>
int binarySearch(int arr[],int x,int low,int high);
void linear_search(int arr[],int x,int size);
int main()
{
    int n,k,arr[50];
    int res;
    int choice; 
    int element;
    
do{
        printf("1.Binar Search\n");
        printf("2.Linear Search\n");          
        printf("Enter Your choice:");
        printf("\n");
        
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Binary Search\n");
                printf("enter the limit");
                scanf("%d",&n);
                printf("Enter the array element");
                for(int i=0;i<=n-1;i++)
                {
                 scanf("%d",&arr[i]);
                }
                printf("Enter the element to be searched");
                scanf("%d",&k);
                element = binarySearch(arr,k,0,n);
                if(element==-1)
                  {
                    printf("Not found");
                  }
                else
                  {
                    printf("Element is found at index %d", element-1);
                  }
                  return 0;
                  
                break;
            case 2:
               printf("Linear Search\n");
               printf("enter the limit");
               scanf("%d",&n);
               printf("enter the array element");
               for(int i=0;i<=n-1;i++)
                {
                 scanf("%d",&arr[i]);
                }
               printf("Enter the element to be searched");
               scanf("%d",&k);
               linear_search(arr,k,n);
               break;
               
            default:
                printf("Invalid input\n");
      }
        
        }
    while(choice<=2);
             return 0;
}
int binarySearch(int arr[], int x, int low, int high)
 {
while (low <= high) {
    int mid = low + (high - low) / 2;

    if(arr[mid] == x)
      return mid;

    if(arr[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }
  return -1;
}

void linear_search(int arr[], int x,int size) {
  int i;

  for (i = 0; i < size; i++) {
    if (arr[i] == x) 
    {
      printf("Element is found at index %d",i + 1);
      break;
    }
  }
  if (i == size)
    printf("\nSearch Element : %d  : Not Found \n", x);
}



