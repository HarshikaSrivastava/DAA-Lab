#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>
int count=0;
void merge(int[10],int,int,int);
void main()
{
void getdata(int[10],int);
void putdata(int[10],int);
void merge_sort(int[10],int,int);
int i,a[100],n;
clrscr();
printf("enter the value of n\n");
scanf("%d",&n);
getdata(a,n);
printf("\nbefore soring\n");
putdata(a,n);
printf("hello");
merge_sort(a,0,n-1);
printf("hello");
printf("\nafter sorting\n");
putdata(a,n);
printf("\n for n = %d value of count is %d",n,count);
getch();
}
void getdata(int a[10],int n)
{
 int k;
 printf("enter the value for sorting\n");
 for(k=0;k<n;k++)
 {
 scanf("%d",&a[k]);
 }
}
void putdata(int a[10], int n)
{
int k;
for(k=0;k<n;k++)
{
 printf("%d\t",a[k]);
}
printf("\n");
}
void merge_sort(int a[],int p,int r)
{
 int q;
if(p<r)
 {
q=(p+r)/2;
merge_sort(a,p,q);
merge_sort(a,q+1,r);
merge(a,p,q,r);
 }
}
void merge(int a[],int p, int q, int r)
{
 int n1,n2;
 int i,j,k;
int l[100],r1[100];
 n1=q-p+1;
count++;
 n2=r-q;
count++;
 l[n1]=999;
 r1[n2]=999;
 for(i=0;i<n1;i++)
{
count++;
 l[i]=a[p+i];
count++;
}
count++;
 for(j=0;j<n2;j++)
{
count++;
 r1[j]=a[q+j+1];
count++;
}
count++;
 i=0;
count++;
 j=0;
count++;
 for(k=p;k<=r;k++)
 {
count++;
if(l[i]<=r1[j])
{
count++;
a[k]=l[i];
count++;
i=i+1;
count++;
}
else
{
count++;
a[k]=r1[j];
count++;
j=j+1;
count++;
}
count++;
 }
count++;
}