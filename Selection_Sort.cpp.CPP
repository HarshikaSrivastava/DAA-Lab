Program file Selection_sort.c :
#include <stdio.h>
#include <stdlib.h>
int count = 0;
int main()
{
void get_data(int [],int);
void selection_sort(int[],int);
void put_data(int[],int);
int a[100];
int n;
printf("Enter the size of array should be less than 100:\n");
scanf("%d",&n);
get_data(a,n);
printf("\n before sorting\n");
put_data(a,n);
selection_sort(a,n);
printf("\n after sorting\n");
put_data(a,n);
printf("\n\n\nFor n=%d no.of counts=%d",n,count);
return 0;
}
void get_data(int a[],int n)
{
int i;
printf("Enter the values of an array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void selection_sort(int a[],int n)
{
int i,j,temp,min;
count++;
for(i=1;i<=n-1;i++)
{
count++;
count++;
min=i-1;
count++;
for(j=i;j<=n-1;j++)
{
count++;
count++;
if(a[j]<a[min])
{
count++;
min=j;
count++;
}
count++;
}
temp=a[min];
count++;
a[min]=a[i-1];
count++;
a[i-1]=temp;
count++;
}

}
void put_data(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
