#include<stdio.h>

int count=0;
int getdata(int[],int);
void putdata(int[],int);

int main()
{
    void counting_sort(int[],int[],int,int);

    int a[100],b[100],n,k;
   
    printf("Enter the number of elements:");
    scanf("%d",&n);
    k=getdata(a,n);
    count++;
    counting_sort(a,b,k,n);
    count++;
    printf("Elements Entered:\n");
    putdata(a,n);
    printf("Sorted element:\n");
    putdata(b,n);
    printf("Count for %d is:%d",n,count);
  
  return 0;
}


int getdata(int a[],int n)
{
     int i,k;
     printf("Enter the %d Element for sorting\n",n);
     for(i=1;i<=n;i++)
     {
      printf("[%d]=",i);
      scanf("%d",&a[i]);
      if(k<a[i])
      k=a[i];
     }
    return k;
}
void putdata(int a[], int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
	      printf("%d\t",a[i]);
	 }
	 printf("\n");
}

void counting_sort(int a[],int b[],int k,int n)
{
    int i,j,C[100];
    count++;
    for(i=0;i<=k;i++)
    {
        count++;
    C[i]=0;
    count++;
    }
    count++;

    for(j=1;j<=n;j++)
    {
        count++;
    C[a[j]]=C[a[j]]+1;
    count++;
    }
    count++;
    for(i=1;i<=k;i++)
    {
        count++;
    C[i]=(C[i]+C[i-1]);
    count++;
        
    }
    count++;
    for(j=n;j>=1;j--)
    {
        count++;
	b[C[a[j]]]=a[j];
	count++;
	C[a[j]]=C[a[j]]-1;
    count++;
    }
    count++;

}