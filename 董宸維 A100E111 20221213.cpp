#include "stdio.h"
#include "stdlib.h"  
//氣泡式寫法 
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		printf("請輸入第 %d 個數: ", i+1); 
		scanf("%d",&a[i]);
	}
	
	printf("您輸入的數為: "); 
	for(int i=0;i<10;i++){
		printf(" %d,",a[i]); 
	}
	int x=0;
	printf("\n"); 
	for(int j=10; j>0; j--){
		for(int i=0;i<j;i++){
			if(a[i]<a[i+1]){
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x; 
			}
		} 
	}
	
	printf("排序後的數為: "); 
	for(int i=0;i<10;i++){
		printf(" %d,",a[i]); 
	}
	//printf(" %d,",a[0]);
	printf("\n"); 	

	return 0;
} 
