#include<stdio.h>
int main()
{
	int a[100],n,i,f;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
     for(i=0;i<n;i++)
	 {
	 	if(a[i]%2!=0)
	 	{
	 	  f=a[i]*2;
		 }
		 printf("\n%d",f);
		 }	
  }    
