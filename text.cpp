#include "stdio.h"
#include "stdlib.h" 
#include "linklist.h"

struct list{
		struct list* pri=NULL;//  *是指標 
		struct list* next=NULL;
		int number;
		char name;
		int score;
	};
static struct list* header;

int main(){
	int s=0, value, n, sco;
	header = NULL;
	while(s!=4){
		printf("1. Add a new element, 2. Delete an element, 3. Show the list, 4. Exit\n");
		scanf("%d",&s);
		if(s==1){
			printf("請輸入學生學號:");
			scanf("%d", &value);
			
			printf("請輸入學生名字:");
			scanf("%s", &n);
			
			printf("請輸入學生成績:");
			scanf("%d", &sco);
				
			if(header == NULL){
				header = createlist(header, value, n, sco);
			}
			else header = Add(header, value, n, sco);
		}
		if(s==2){
			printf("Delete the element:");
			scanf("%d", &value);
			header = Delete(header, value);	
		}
		if(s==3){
			header = Show(header);
		}
	}
	return 0;	
}
struct list* createlist(struct list* header, int value, char n, int sco){
	header = (struct list *)malloc(sizeof(struct list));//sizeof(struct list)空間大小
	// malloc記憶體配置 記憶體"M"emory  配置 "alloc"ation
	if(header == NULL) return NULL; //偵測記憶體header是否有建置成功 
	header->number = value;
	header->name = n;
	header->score = sco;
	header->next = NULL;
	header->pri = NULL;
	return header;
}

struct list* Add(struct list* header, int value, char n, int sco){
	struct list* current;
	current = header;
	while(current->next != NULL){
		current = current->next;
	}	
	current->next = (struct list *)malloc(sizeof(struct list));
	current->next->number = value;
	current->next->name = n;
	current->next->score = sco;
	current->next->pri = current;
	current->next->next = NULL;
	return header;
}

struct list* Delete(struct list* header, int value){
	struct list* current;
	current = header;
	while(current->number != value){
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
		printf("%d, ", current->number);
		printf("%s,",current->name);
		printf("%d,",current->score);
		current = current->next;
	}
	printf("\n");
	return header;
}


