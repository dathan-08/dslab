#include <conio.h>
#include<stdio.h>

void main()
{
int a[50],i,n,min,max;
printf("Enter size of the array :");
scanf("%d",&n);
printf("Enter elements in array :");
for(i=0; i<n; i++)
{

20MCA135 DS Lab

Dept. of Computer Applications 6 MITS
scanf("%d",&a[i]);
}
min=max=a[0];
for(i=1; i<n; i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("minimum of array is :%d",min);
printf("\nmaximum of array is :%d",max);
}