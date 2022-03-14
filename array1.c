#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
	   printf("%d\t",arr[i]); 
	   printf("\n");
	   printf("Address of Array:\n");
	   for(i=0;i<5;i++)
	   printf("Address of arr[%d] is = %p\n",i,&arr[i]);
}

