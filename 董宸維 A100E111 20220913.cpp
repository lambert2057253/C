#include"stdio.h"//stdio.h檔名 
#include"stdlib.h"
int main(void)
//int = 4byte ,long = 4byte ,double = 8byte ,short = 2byte ,char = 1byte char字元 ,float = 4byte float浮點數  
{
	float x=10.9, y=20.3;
	float A[10];
	printf("x的值為:%f\n",x);
	printf("y的值為:%f\n",y);
	printf("x的位址為:%d\n",&x);//&x記憶體的位置 
	printf("y的位址為:%d\n",&y);
	for(int i=0; i<10; i++)
	{
		printf("陣列A[%d]的位址為:%d\n",i,&A[i]);
	}
	return 0;
} 
/*
int main(void)
{
	int A[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("陣列A[%d][%d]的位址為:%d",i,j,&A[i][j]);
		}
		printf("\n");
	}
	int A[50][50];
	已知&A[8][7]的位址=1000
	求&A[22][33]的記憶體位址
	算試1000+4*{(22-8)*50+(33-7)} = 3904 
	int A[20][30];
	已知&A[12][15]的位址=6000
	求&A[18][11]的記憶體位址
	求&A[4][15]的記憶體位址
	6000+8*{(18-12)*30+(11-15)}=7408 
	6000+8*{(4-12)*30+(18-15)}=4104 
	int A[6][7][8];
	已知&A[4][3][2]的位址=5000
	求&A[2][3][4]的記憶體位址
	求&A[5][4][3]的記憶體位址
	5000+4*{(2-4)*7*8+(3-3)*8+(4-2)}=4560
	5000+4*{(5-4)*7*8+(4-3)*8+(3-2)}=5260
	return 0;
}
 
int main(void)
{
	int A[30];
	A[0]=0;
	A[1]=1;
	for(int i=0; i<28; i++)
	{
		A[i+2]=A[i]+A[i+1];
	}
	printf("費氏數列地前30個的數為: ");
	for(int i=0;i<30; i++)
	{
		printf("%d,",A[i]);
	} 
	return 0;
} 
*/
