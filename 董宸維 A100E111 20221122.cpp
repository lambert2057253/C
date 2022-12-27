 #include "stdio.h"
#include "stdlib.h" 
#include "cyclequeue.h"
int main(){
	int buffer[20],p=0,q=0,value,x=0;
	for(int i=q;i<=p;i++){
		while(x != 4){
			printf("1.輸入,2.取出,3.印出,4.離開\n");
			scanf("%d",&x);
			if(x==1){
				printf("請輸入數值");
				scanf("%d",&value);
				if(push(buffer,value,p,q)==-1){
					printf("裡面的數值已滿\n");
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
				if(p>q){//printf("裡面數值為空");
					for(int i=q;i<p;i++){
						printf("%d,",buffer[i]);
					}
				}
				else if(p<q){
						for(int i=q;i<20;i++){
							printf("%d,",buffer[i]);
						}
						for(int i=q;i<p;i++){
							printf("%d,",buffer[i]);
						}
					}
				else{
						printf("裡面數值為空");			
					}
				printf("\n");
			}
			else if(x>4) printf("選擇錯誤!再試一次!\n");
		}
	}
	return 1;
} 
int push(int buffer[20],int value,int&p,int&q){
	
	if(p+1==q) return-1;
	buffer[p]=value;
	p=(p+1)%20;
	return 1;
}
int pull(int buffer[20],int& value,int&p,int&q){
	if(p==q) return -1; 
	value = buffer[q];
	q=(q+1)%20;
	return 1;
}
