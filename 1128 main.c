#include<stdio.h>
//catch cold 2024 11 25 fuck
void new1()
{
	int mynumbers[]={22, 33, 44, 55};
	mynumbers[0]=33;//change the element of array
	for(int i=0;i<4;i++){
		printf("%d\n",mynumbers[i]);
	}
	//get the size of array
	printf("%lu\n",sizeof(mynumbers));
	//get the length of array
	int length=sizeof(mynumbers)/sizeof(mynumbers[0]);
	printf("%d\n",length);
	//more!
	for(int ii=0;ii<length;ii++){
		printf("%d\n",mynumbers[ii]);        
	}
}
