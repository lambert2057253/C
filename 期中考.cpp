#include"stdio.h"
#include"stdlib.h"
int main(){
	struct data{
		char ID[20];
		char name[10];
		int a[3];
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
		student[i].a[2] = student[i].a[0]+student[i].a[1];
		printf("\n");
	}
	for(int i=0;i<3;i++){
		printf("學生學號為:%s\n",student[i].ID);
		printf("學生姓名為:%s\n",student[i].name);
		printf("國文成績為:%d\n",student[i].a[0]);
		printf("英文成績為:%d\n",student[i].a[1]);
		printf("總成績為:%d\n",student[i].a[2]);
		printf("\n");
	}	
	int top=0,high=0;
	for(int i=0;i<3;i++){
		if(student[i].a[0]>high){
			high=student[i].a[0];
			top=i;
		}
	}
	printf("國文考最好的學生為:\n");
	printf("學號:%s\n",student[top].ID);
	printf("學生姓名:%s\n",student[top].name);
	printf("國文成績為:%d\n",student[top].a[0]);
	printf("\n");
	int pass=60,notpass=0;
	
	for(int i=0;i<3;i++){
		if(student[i].a[1]<pass){
			notpass++;
		}
	}
	printf("英文不及格的人數有%d",notpass);
}
