#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int count=0;
void max_heapify(int *,int);
void build_max_heap(int *,int);
void heapsort(int *,int);
void swap(int *,int *);
int heapsize;
void main()
 {
 void getdata(int[],int);
 void putdata(int[],int);
 int *arr,n,i;
 clrscr();
 printf("enter size of array = ");
 scanf("%d",&n);
 arr=(int *)malloc(sizeof(int)*n);
 getdata(arr,n);
 printf("\n Unsorted array =");
 putdata(arr,n);
 heapsort(arr,n);
 printf("\n sorted array=");
 putdata(arr,n);
 printf("\n count=%d", count);
getch();
 }
void heapsort(int *arr,int len)
 {
 int i;
 count++;
 build_max_heap(arr,len);
count++;
 for(i=len-1;i>=1;i--)
 {
 count++;
 swap(&arr[0],&arr[i]);
 count++;
 heapsize = heapsize -1;
 count++;
 max_heapify(arr,0);
 count++;
 }
 }
void max_heapify(int *arr,int i)
{
 int l=2*i,r=2*i+1,largest;
 count++;
 if(l<heapsize && arr[l]>arr[i])
 {
count++;
 largest = l;
 count++;
 }
 else
 { count++;
largest = i;
count++;
 }
 if(r<heapsize && arr[r]>arr[largest])
 {
 count++;
 largest = r;
 count++;
 }
count++;
 if (largest != i)
 {
count++;
swap(&arr[i],&arr[largest]);
count++;
max_heapify(arr,largest);
count++;
 }
 }
void build_max_heap(int *arr,int len)
{
 heapsize = len;
 int i;
 count++;
 for(i = len/2;i>=0;i--)
 {
 count++;
 max_heapify(arr,i);
 count++;
 }
}
void swap(int *a,int *b)
 {
 int temp = *a;
 *a = *b;
 *b = temp;
 }
void getdata(int x[20], int n)
{
 int k;
 printf("\n enter the %d elements for sorting=\n",n);
 for(k=0;k<n;k++)
 {
 scanf("%d",&x[k]);
 }
}
void putdata(int x[20],int n)
{
 int k;
 for(k=0;k<n;k++)
 {
 printf("%d",x[k]);
 }
 printf("\n");
}