#include "stdio.h"
#include "stdlib.h" 
#include "Linklist.h"

struct list{
		struct list* pri=NULL;//  *�O���� 
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
		printf("1.�s�W�@�W�ǥ�, 2. �R���@�W�ǥ�, 3. ��ܩҦ��ǥ�, 4. ���}\n");
		scanf("%d",&s);
		if(s==1){
			if(header == NULL){
				header = createlist(header, value);
			}
			else header = Add(header, value);
		}
		if(s==2){
			printf("�п�J�n�R�����Ǹ�:");
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
	header = (struct list *)malloc(sizeof(struct list));//sizeof(struct list)�Ŷ��j�p
	// malloc�O����t�m �O����"M"emory  �t�m "alloc"ation
	if(header == NULL) return NULL; //�����O����header�O�_���ظm���\ 
	 
	printf("�п�J�ǥ;Ǹ�:");
	scanf("%d", &header->ID);
	
	printf("�п�J�ǥͦW�r:");
	scanf("%s", &header->name);
	
	printf("�п�J�ǥͦ��Z:");
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
	printf("�п�J�ǥ;Ǹ�:");
	scanf("%d", &current->next->ID);
	
	printf("�п�J�ǥͦW�r:");
	scanf("%s", &current->next->name);
	
	printf("�п�J�ǥͦ��Z:");
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
		printf("�Ǹ�%d, ", current->ID);
		printf("�m�W%s,",current->name);
		printf("���Z%d,",current->score);
		current = current->next;
		printf("\n");
	}
	printf("\n");
	return header;
}

