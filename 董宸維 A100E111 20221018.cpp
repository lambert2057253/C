#include"stdio.h"
#include"stdlib.h"


int main(){
	struct data{
		char ID[20];
		char name[10];
		int c[4];
	};
	data student[3];
	for(int i=0;i<3;i++){
		printf("請輸入學號:");
		scanf("%s",student[i].ID);
		printf("請輸入姓名:");
		scanf("%s",student[i].name);
		printf("請輸入國文成績:");
		scanf("%d",&student[i].c[0]);
		printf("請輸入英文成績:");
		scanf("%d",&student[i].c[1]);
		printf("請輸數學成績:");
		scanf("%d",&student[i].c[2]);
		student[i].c[3] = student[i].c[0] + student[i].c[1] + student[i].c[2];
		printf("\n");
	};
	for(int i=0;i<3;i++){
		printf("學號:%s\n",student[i].ID);
		printf("姓名:%s\n",student[i].name);
		printf("國文成績:%d\n",student[i].c[0]);
		printf("英文成績:%d\n",student[i].c[1]);
		printf("數學成績:%d\n",student[i].c[2]);
		printf("總成績為:%d\n",student[i].c[3]);
		printf("\n");
	};
return 0;
} 

/*
int main(){
	struct data{
		char ID[20];
		char name[10];
		int c;
		int e;
		int m;
		int total;
	};
	data student;
	printf("請輸入學號:");
	scanf("%s",student.ID);
	printf("請輸入姓名:");
	scanf("%s",student.name);
	printf("請輸入國文成績:");
	scanf("%d",&student.c);
	printf("請輸入英文成績:");
	scanf("%d",&student.e);
	printf("請輸數學成績:");
	scanf("%d",&student.m);
	student.total = student.m + student.e + student.c;
	printf("學號:%s\n",student.ID);
	printf("姓名:%s\n",student.name);
	printf("國文成績:%d\n",student.c);
	printf("英文成績:%d\n",student.e);
	printf("數學成績:%d\n",student.m);
	printf("總成績為:%d\n",student.total);
return 0;
} */
