#include "stdio.h"
#include "stdlib.h"  

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
	printf("\n"); 
	int top=0, x=0, temp=0;
	for(int j=0; j<10; j++){
		for(int i=j;i<10;i++){
			if(top<a[i]){+ 
				top=a[i];
				x=i;
			}
		}
		temp=a[j];
		a[j]=a[x];
		a[x]=temp;	
	}
	
	printf("排序後的數為: "); 
	for(int i=0;i<10;i++){
		printf(" %d,",a[i]); 
	}
	printf("\n"); 	

	return 0;
}

