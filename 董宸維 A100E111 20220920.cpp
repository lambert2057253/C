#include"stdio.h"//stdio.h檔名 
#include"stdlib.h"
int main(void)  
{
	int x = 10;
	int y = 20;
	int *p = &x;//*指標 所以*p=整數型態的記憶體位置 ,指向&x的記憶體位置 
	int *q = &y;
	printf("x的值為:%d\n",x);
	printf("x的位址為:%d\n",&x);//&x記憶體的位置 
	printf("y的值為:%d\n",y);
	printf("y的位址為:%d\n",&y);
	printf("p的值為:%d\n",p);
	printf("p的位址為:%d\n",&p);
	printf("q的值為:%d\n",q);
	printf("q的位址為:%d\n",&q);
	return 0;
} 
