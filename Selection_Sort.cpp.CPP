#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int count=0;
void  main()
{

    void get_data(int [],int);
    void put_data(int [],int);
     void selection(int[],int);
    int a[100];
    int n;
    clrscr();
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    get_data(a,n);
    printf("Array before sorting:\n");
    put_data(a,n);
    selection(a,n);
    printf("\nArray after sorting:\n");
    put_data(a,n);
    printf("\n\n no of counts are=%d",count);
    getch();
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

 void selection(int a[],int n)
      {
       count++;
     int pass,j,temp,min,count;
	for(pass=1;pass<=n-1;pass++)
	{
	count++;
	 min=pass-1;
	 count++;
	 for(j=pass;j<n;j++)
	 {
	  count++;
	  if(a[j]<a[min])
	  {
	   count++;
	   min=j;
	   count++;
	   }
	   }
	   temp=a[min];
	   count++;
	   a[min]=a[pass-1];
	   count++;
	   a[pass-1]=temp;
	  }
       }








































































































