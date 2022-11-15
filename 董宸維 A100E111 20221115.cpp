#include "stdio.h"
#include "stdlib.h"
#include "queue.h"

int main(){
	int buffer[20],p=0,q=0,value,x=0;
	while(x != 4){
		printf("1.輸入,2.取出,3.印出,4.離開\n");
		scanf("%d",&x);
		if(x==1){
			printf("請輸入數值");
			scanf("%d",&value);
			if(push(buffer,value,p)==-1){
				printf("裡面的數值已滿");
			}
		}
		else if(x==2){
			if(pull(buffer,value,p,q)==-1){
				printf("裡面數值為空\n");
			}else{
				printf("拿取的直為%d\n",value);
			}
		}
		else if(x==3){
			if(p==q)printf("裡面數值為空");
			for(int i=q;i<p;i++){
				printf("%d,",buffer[i]);
			}
			printf("\n");
		}
		else if(x>4)printf("選擇錯誤!再試一次!\n");
	}
	return 1;
} 
int push(int buffer[20],int value,int&p){
	if(p==20) return-1;
	buffer[p]=value;
	p++;
	return 1;
}
int pull(int buffer[20],int& value,int&p,int&q){
	if(p==q) return -1; 
	value = buffer[q];
	q++;
	return 1;
}
