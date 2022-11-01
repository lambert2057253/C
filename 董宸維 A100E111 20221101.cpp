#include "stdio.h"
#include "stdlib.h"
#include "buffer.h"

int main(){
	int buffer[20],top=0,value,x=0;
	while(x != 4){
		printf("1.輸入,2.取出,3.印出,4.離開\n");
		scanf("%d",&x);
		if(x==1){
			printf("請輸入數值");
			scanf("%d",&value);
			if(push(buffer,value,top)==-1){
				printf("裡面的數值已滿");
			}
		}
		else if(x==2){
			if(pull(buffer,value,top)==-1){
				printf("裡面數值為空");
			}else{
				printf("拿取的直為%d",value);
			}
		}
		else if(x==3){
			if(top==0)printf("裡面數值為空");
			for(int i=0;i<top;i++){
				printf("%d,",buffer[i]);
			}
			printf("\n");
		}
		else if(x>4)printf("選擇錯誤!再試一次!");
	}
	return 1;
} 
int push(int buffer[20],int value,int&top){
	if(top==20)return-1;
	buffer[top]=value;
	top++;
	return 1;
}
int pull(int buffer[20],int& value,int&top){
	if(top==0)return-1;
	top--;
	value = buffer[top];
	return 1;
}
