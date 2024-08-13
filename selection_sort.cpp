#include<stdio.h>
int main()
{
    int a[20],temp,i,j,n,index,min;
    printf("enter how many no's you want input");
    scanf("%d",&n);
    printf("enter numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                index=j;
            }
        }
        if(index!=i)
        {
            temp=a[i];
            a[i]=a[index];
            a[index]=temp;
        }
    }
    printf("values after selection sort");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
