#include"stdio.h"
#include"stdlib.h"

int main(){
struct data{
	char name[10];
	int c;
	int e;
	int m;
	int total=0;
};
data student;
printf("請輸入學生姓名:");
scanf("%s",student.name);
printf("國文成績:");
scanf("%d",&student.c);
printf("英文成績:");
scanf("%d",&student.e);
printf("數學成績:");
scanf("%d",&student.m);
student.total=student.c+student.e+student.m;
printf("學生姓名:%s ,國文成績:%d ,英文成績:%d, 數學成績:%d ,成績總和:%d",student.name,student.c,student.e,student.m,student.total);
return 0;
}


/*
int main(){
char name[5][10];
for(int i=0;i<5;i++){
	printf("請輸入第%d位學生姓名:",i+1);
	scanf("%s",name[i]);
} 
printf("\n\n");
for(int i=0;i<5;i++){
	printf("第%d位學生姓名是:%s\n",i+1,name[i]);
} 
return 0;
}*/
