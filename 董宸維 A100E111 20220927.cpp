#include"stdio.h"//stdio.h¿…¶W 
#include"stdlib.h"
int main(void){
	int A[30];
	A[0]=1;
	A[1]=1;
	printf("%d\n%d\n",A[0],A[1]);
	for(int i=2; i<30; i++)
	{	
		A[i]=A[i-2]+A[i-1];
		printf("%d\n",A[i]);	
	}
	return 0;
}
/*
int main(void){
	int A[30];
	A[0]=1;
	A[1]=1;
	//printf("%d\n",A[0]);
	for(int i=0; i<28; i++)
	{	
		A[i+2]=A[i]+A[i+1];
		printf("%d\n",A[i]);	
	}
	return 0;
}*/




/*int main(void){
	
	int A[10];
	A[0]=1;
	printf("%d\n",A[0]);
	for(int i=1; i<10; i++)
	{	
		A[i]=A[i-1]+2;
		printf("%d\n",A[i]);	
	}
	return 0;
}
int main(void){
	
	int A[10];
	for(int i=0; i<10; i++)
	{
		A[i]=2*i+1;
		printf("A[%d]=%d\n",i,A[i]);
	}
	return 0;
}*/
/*int main(void){
	
	int A[10];
	for(int i=0; i<10; i++)
	{
		A[i]=i;
		printf("A[%d]=%d\n",i,A[i]);
	}
	return 0;
}*/
