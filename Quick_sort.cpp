//quick sort
#include<stdio.h>
#include<stdlib.h>
void quicksort(int a[10],int first,int last);
void main(){
	int i,j,a[10],size,pivot,temp,first,last;
	printf("\n enter the size of array:");
	scanf("%d",&size);
	if (size>10)
	{
		printf("\n overflow");
	}
	else
	{
		printf("\n enter the elements of array:");
		for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
		}		
		// array before sorting
		printf("\n array before sorting:");
		for(i=0;i<size;i++)
		{
			printf("%d\t",a[i]);
		}
		// quick sort
	void quicksort()
	{
		if(first<last)
		{
			pivot=first;
			j=last;
			i=first;
			while(i<j)
			{
				while(a[i]<=a[pivot]&&i<last)
				i++;
				while(a[j]>a[pivot])
				j--;
				if(i<j)
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
			temp=a[pivot];
			a[pivot]=a[j];
			a[j]=pivot;
			quicksort(a,0,j);
			quicksort(a,j+1,last);
	}
		}
	
		// array after sorting
		printf("\n array after sorting:");
		for(i=0;i<size;i++)
		{
			printf("%d\t",a[i]);
		}
}
