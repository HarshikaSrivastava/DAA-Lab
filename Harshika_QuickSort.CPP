#include<stdio.h>
#include<stdlib.h>

int count=0;
int main()
{
    void get_data(int [],int);
    void put_data(int [],int);
    void Quick_sort(int [],int,int);
    int a[100];
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    get_data(a,n);
    printf("Array before sorting:\n");
    put_data(a,n);
    Quick_sort(a,0,n-1);
    printf("\nArray after sorting:\n");
    put_data(a,n);
    printf("\n\nFor n=%d no of counts are=%d",n,count);
    return 0;
}

int partition(int a[],int p,int r)
{
    count++;
   int x,i,j;
   count++;
   x=a[r];
   count++;
   i=p-1;
   count++;
   for(j=p;j<=r-1;j++)
   {
       count++;
       count++;
       if(a[j]<x)
       {
           count++;
           i=i+1;
           count++;
           swap(&a[i],&a[j]);
           count++;
       }
   }
      swap(&a[i+1],&a[r]);
      count++;
   return (i+1);
   count++;
}

void Quick_sort(int a[],int p,int r)
{
    int q;
    count++;
    if(p<r)
    {
        count++;
        q=partition(a,p,r);
        count++;
        Quick_sort(a,p,q-1);
        count++;
        Quick_sort(a,q+1,r);
        count++;
    }
}

void get_data(int arr[],int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void put_data(int a[],int n)
{
    int i;
    for(i=0 ; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
}
