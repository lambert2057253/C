#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main(){
	struct data{
		char ID[20];
		char name[10];
		int a[4];
	};
	data student[3];
	for(int i=0;i<3;i++){
		printf("請輸入學號:");
		scanf("%s",student[i].ID);
		printf("請輸入姓名:");
		scanf("%s",student[i].name);
		printf("請輸入國文成績:");
		scanf("%d",&student[i].a[0]);
		printf("請輸入英文成績:");
		scanf("%d",&student[i].a[1]);
		printf("請輸入數學成績:");
		scanf("%d",&student[i].a[2]); 
		student[i].a[3]=student[i].a[0]+student[i].a[1]+student[i].a[2];
		printf("\n");
	}
	for(int i=0;i<3;i++){
		printf("學號為:%s\n",student[i].ID);
		printf("姓名為:%s\n",student[i].name);
		printf("國文成績為:%d\n",student[i].a[0]);
		printf("英文成績為:%d\n",student[i].a[1]);
		printf("數學成績為:%d\n",student[i].a[2]);
		student[i].a[3]=student[i].a[0]+student[i].a[1]+student[i].a[2];
		printf("總成績為:%d\n",student[i].a[3]);
		printf("\n");
	}
	int top ,total,t[3];
	
	for(int i=0;i<3;i++){
		if(student[i].a[3]>=total){
			total=student[i].a[3];
			top=i;
			if(student[i].a[3]==total){
				t[i]=i;
			}else{
				
			}
		}
	}
	if(t[0]==0 && t[1]==0 && t[2]==0){
		printf("1考最好的學號:%s\n",student[top].ID);
		printf("考最好的姓名:%s\n",student[top].name);
		printf("考最好的總成績:%d\n",student[top].a[3]);
	}else{
		for(int i=0;i<3;i++){
			printf("2考最好的學號:%s\n",student[t[i]].ID);
			printf("考最好的姓名:%s\n",student[t[i]].name);
			printf("考最好的總成績:%d\n",student[t[i]].a[3]);
		}
	}

	
	/*
	if(student[0].a[3]>student[1].a[3]){
		if(student[0].a[3]>student[2].a[3]){
			printf("考最好的學號:%s\n",student[0].ID);
			printf("考最好的姓名:%s\n",student[0].name);
			printf("考最好的總成績:%d\n",student[0].a[3]);
		}else{
			printf("考最好的學號:%s\n",student[2].ID);
			printf("考最好的姓名:%s\n",student[2].name);
			printf("考最好的總成績:%d\n",student[2].a[3]);
		}
	}else{
		if(student[1].a[3]>student[2].a[3]){
			printf("考最好的學號:%s\n",student[1].ID);
			printf("考最好的姓名:%s\n",student[1].name);
			printf("考最好的總成績:%d\n",student[1].a[3]);
		}else{
			printf("考最好的學號:%s\n",student[2].ID);
			printf("考最好的姓名:%s\n",student[2].name);
			printf("考最好的總成績:%d\n",student[2].a[3]);
		}
	}
	*/
	
	return 0;
}

