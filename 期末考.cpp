#include "stdio.h"
#include "stdlib.h" 
#include "Linklist.h"

struct list{
		struct list* pri=NULL;//  *是指標 
		struct list* next=NULL;
		int ID;
		char name[10];
		int score;
	};
static struct list* header;

int main(){
	int s=0, value;
	header = NULL;
	while(s!=4){
		printf("1.新增一名學生, 2. 刪除一名學生, 3. 顯示所有學生, 4. 離開\n");
		scanf("%d",&s);
		if(s==1){
			if(header == NULL){
				header = createlist(header, value);
			}
			else header = Add(header, value);
		}
		if(s==2){
			printf("請輸入要刪除的學號:");
			scanf("%d", &value);
			header = Delete(header, value);	
		}
		if(s==3){
			header = Show(header);
		}
	}
	return 0;	
}
struct list* createlist(struct list* header, int value){
	header = (struct list *)malloc(sizeof(struct list));//sizeof(struct list)空間大小
	// malloc記憶體配置 記憶體"M"emory  配置 "alloc"ation
	if(header == NULL) return NULL; //偵測記憶體header是否有建置成功 
	 
	printf("請輸入學生學號:");
	scanf("%d", &header->ID);
	
	printf("請輸入學生名字:");
	scanf("%s", &header->name);
	
	printf("請輸入學生成績:");
	scanf("%d", &header->score);
	header->next = NULL;
	header->pri = NULL;
	return header;
}

struct list* Add(struct list* header, int value){
	struct list* current;
	current = header;
	while(current->next != NULL){
		current = current->next;
	}	
	current->next = (struct list *)malloc(sizeof(struct list));
	printf("請輸入學生學號:");
	scanf("%d", &current->next->ID);
	
	printf("請輸入學生名字:");
	scanf("%s", &current->next->name);
	
	printf("請輸入學生成績:");
	scanf("%d", &current->next->score);
	current->next->pri = current;
	current->next->next = NULL;
	return header;
}

struct list* Delete(struct list* header, int value){
	struct list* current;
	current = header;
	while(current->ID != value){
		current = current->next;
	}
	if (current->pri == NULL){
		header = current->next;
		header->pri = NULL;
		header->next = current->next->next;
		
	}
	else if(current->next==NULL){
		current->pri->next = NULL;
	}
	else{
		current->pri->next = current->next;
		current->next->pri = current->pri;
	}
	free(current);
	return header;
}


struct list* Show(struct list* header){
	struct list* current;
	current = header;
	while(current!=NULL){
		printf("學號%d, ", current->ID);
		printf("姓名%s,",current->name);
		printf("成績%d,",current->score);
		current = current->next;
		printf("\n");
	}
	printf("\n");
	return header;
}

