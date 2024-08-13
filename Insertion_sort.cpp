/* insertion sort*/
#include<stdio.h>
int main()
{
    int a[20],i,j,n,k,key;
    printf("enter how many no's you want input");
    scanf("%d",&n);
    printf("enter numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=1;k<n;k++)
    {
       key=a[k];
       j=k-1;
       while(key<a[j]&&j>=0)
       {
           a[j+1]=a[j];
           j=j-1;
       }
       a[j+1]=key;
    }
    printf("values after selection sort");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
