#include"stdio.h"
#include"stdlib.h"
int main(){
int name[10];
	printf("請輸入你的名字:");
	scanf("%s",name);
	printf("你的名字是:%s",name);
return 0;
}






/*
int main(){
int A[10];
int B;
for(int i=0;i<10;i++){
	printf("請輸入A[%d]的值:",i);
	scanf("%d",&A[i]);
	
}
for(int i=0;i<10;i++){
	printf("A[%d]的值=%d\n",i,A[i]);
	B+= A[i];
  	//B=B+A[i];//兩個相通 
}
printf("總和=%d\n",B);
return 0;

}



	
/*
int main(){
int A[10];

for(int i=0;i<10;i++){
	printf("請輸入A[%d]的值:",i);
	scanf("%d",&A[i]);
}
for(int i=0;i<10;i++){
	printf("A[%d]的值=%d\n",i,A[i]);
}
return 0;

}



/*
int main(){

int A[10];
A[0]=1;
printf("0!=%d\n",A[0]);
for(int i=1;i<10;i++){
	A[i]=A[i-1]*i;
	printf("%d!=%d\n",i,A[i]);
}
return 0;

}*/
