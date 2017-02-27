#include<stdio.h>
#define SIZE 10
main(){
	int a[SIZE]={3,6,8,6,1,2,9,6,10,5};
	int min,pos;
	int i,j;
	printf("Original Numbers:\n");
	for(i=0;i<SIZE;i++)
		printf("%3d",a[i]);
	for(i=0;i<SIZE;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<SIZE;j++)
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		a[pos]=a[i];
		a[i]=min;
		printf("\n pass by %d the sorted numbers:\n",i+1);
		for(j=0;j<SIZE;j++)
			printf("%3d",a[j]);
	}
}
