#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>
#include<stdlib.h>
#include<time.h>
int count=0;
int partition(int[10],int,int);
void main()
{
	void getdata(int[10],int);
	void putdata(int[10],int);

	int myrandom(int,int);
	int i,a[100],n;
	clrscr();
	printf("enter the value of n\n");
	scanf("%d",&n);
	getdata(a,n);
	printf("\nbefore soring\n");
	putdata(a,n);
	printf("hello");
	partition(a,0,n-1);
	printf("hello");
	printf("\nafter sorting\n");
	putdata(a,n);
	printf("\n for n = %d value of count is  %d",n,count);
	getch();
}
void getdata(int a[10],int n)
{
     int k;
     printf("enter the value  for sorting\n");
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
int myrandom(int lower,int upper)
{
 int num;
 srand(time(0));
 num=(rand() % (upper - lower + 1)) + lower ;
 return num;
}
 int partition(int a[],int p, int r)
{
  int x,y,i,j,temp;
  y=myrandom(p,r-1);
  temp=a[y];
  a[y]=a[r];
  a[r]=temp;
  x=a[r];
  i=p-1;
  for(j=p;j<=r-1;j++)
   {
	if(a[j]<x)
	{
		i=i+1;
	       temp=a[i];
		a[i]=a[j];
	      a[j]=temp;
	}
   }
  temp=a[i+1];
  a[i+1]=a[r];
  a[r]=temp;

  return(i+1);
}