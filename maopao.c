#include<stdio.h>
main(){
	int s[6],i,j,temp;
	printf("Input 6 numbers: \n");
	for(i=0;i<6;i++)
		scanf("%d",&s[i]);/* 定义一个数组，并给这6个元素赋值*/
	printf("\n");
	
	for(j=0;j<5;j++)
		for(i=0;i<6-j;i++)
			if(s[i]>s[i+1]){
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
	printf("the sorted number:\n");
	for(i=0;i<6;i++)
		printf("%d  ",s[i]);
}
