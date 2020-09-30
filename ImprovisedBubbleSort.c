#include<stdio.h>
#include<conio.h>
int count=0;
void improvised_bubble_sort(int[],int);
void main()
{
void getdata(int[50],int);
void putdata(int[50],int);
int i,a[50],n;
printf("\nEnter the value of n\n");
scanf("%d",&n);
getdata(a,n);
printf("\nBefore sorting \n");
putdata(a,n);
improvised_bubble_sort(a,n);
printf("\nAfter sorting \n");
putdata(a,n);
printf("\nCount=%d \n",count);
}
 void getdata(int x[50],int n)
 {
 int k;
 printf("enter the value for sorting\n");
 for(k=0;k<n;k++)
 {
 scanf("%d",&x[k]);
 } }
 void putdata(int x[50], int n)
 {
 int k;
 for(k=0;k<n;k++)
 {
 printf("%d\t",x[k]);
 }
 }
void improvised_bubble_sort(int a[],int n)
{
 int i,j,temp;
 int pass=1;
 count++;
 for(i=0;i<n-1 && pass==1;i++)
 {
 pass=-1;
 count++;
 for(j=i+1;j<n;j++)
 {
 count++;
 if(a[i]>a[j])
 {
 count++;
 temp=a[i];
 count++;
 a[i]=a[j];
 count++;
 a[j]=temp;
 count++;
 pass=1;
 count++;
 }
 count++;
 }
 count++;
 }
 count++;
}
