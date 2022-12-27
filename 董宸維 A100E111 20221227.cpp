#include "stdio.h"
#include "stdlib.h" 
#include "linklist.h"

struct list{
		struct list* pri=NULL;//  *是指標 
		struct list* next=NULL;
		int data;
	};
static struct list* header;

int main(){
	int s=0, value;
	header = NULL;
	while(s!=4){
		printf("1. Add a new element, 2. Delete an element, 3. Show the list, 4. Exit\n");
		scanf("%d",&s);
		if(s==1){
			printf("Input the element:");
			scanf("%d", &value);
			if(header == NULL){
				header = createlist(header, value);
			}
			else header = Add(header, value);
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
struct list* createlist(struct list* header, int value){
	header = (struct list *)malloc(sizeof(struct list));//sizeof(struct list)空間大小
	// malloc記憶體配置 記憶體"M"emory  配置 "alloc"ation
	if(header == NULL) return NULL; //偵測記憶體header是否有建置成功 
	header->data = value;
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
	current->next->data = value;
	current->next->pri = current;
	current->next->next = NULL;
	return header;
}

struct list* Delete(struct list* header, int value){
	struct list* current;
	current = header;
	while(current->data != value){
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
		printf("%d, ", current->data);
		current = current->next;
	}
	printf("\n");
	return header;
}

