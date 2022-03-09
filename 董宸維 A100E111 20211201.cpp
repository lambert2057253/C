/******************************************************************************/
/*****************************************************************************/
/*                   董宸維  A100E111  2021/12/01                           */
/***************************************************************************/
#include <stdio.h>
void Inverted_Left();
void Left_Triangle();
void Inverted_Right_Triangle();
void Right_Triangle();
void Equilateral();
void Inverted_Equilateral();
void Main_Import();

int main()
{
    Main_Import();
    return 0;
}
void Main_Import()
{
    int MainID = 0;
    while(1)
    {
        printf("\n請問您要哪一種形狀\n1.正三角形\n2.倒正三角形\n3.右直角三角形\n4.倒右直角三角形\n5.左直角三角形\n6.倒左直角三角形\n7.菱形\n0.離開\n");
        scanf("%d",&MainID);
        switch(MainID)
        {
            case 0:
                break;
            case 1:
                Equilateral();
                break;
            case 2:
                Inverted_Equilateral();
                break;
            case 3:
                Right_Triangle();
                break;
            case 4:
                Inverted_Right_Triangle();
                break;
            case 5:
                Left_Triangle();
                break;
            case 6:
                Inverted_Left();
                break;
            case 7:
                Equilateral();
                Inverted_Equilateral();
                break;
            default :
                printf("  輸入錯誤!!  ");
                break;
        }
        if(MainID==0)
        {
        	printf("已離開"); 
            break;
        }
    }
}
void Inverted_Equilateral()//倒正三角形
{
    int cnt1;
    int cnt2;
    int Max_White=8;
    char Mark1=' ';
    char Mark2='*';
    for(cnt1=0;cnt1<=Max_White;cnt1++) 
    {
        for(cnt2=0;cnt2<=cnt1;cnt2++)
        {
            printf("%c",Mark1);
        }   
        for(cnt2=(Max_White-cnt1)*2-1;cnt2>0;cnt2--) 
        {
            printf("%c",Mark2);
        }
        printf("\n");
    }
}
void Equilateral()//正三角形
{
    int cnt1;
    int cnt2;
    int Max_White=9;
    char Mark1=' ';
    char Mark2='*';
    for(cnt1=Max_White;cnt1>0;cnt1--) 
    {
        for(cnt2=0;cnt2<cnt1;cnt2++)
        {
            printf("%c",Mark1);
        }   
        for(cnt2=(Max_White-cnt1)*2-1;cnt2>0;cnt2--) 
        {
            printf("%c",Mark2);
        }  
        printf("\n");
    }
}
void Right_Triangle()//右直角三角形
{
    int cnt1;
	int cnt2;
	int Max_White = 8;
	char Mark1 = ' ';
	char Mark2 = '*';
	for(cnt1 = 7 ; cnt1 >= 0 ; cnt1--)
	{
		printf("\n");
		for(cnt2 = 0 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark1);
		}
		for(cnt2 = Max_White-cnt1 ; cnt2>0 ; cnt2--)
		{
			printf("%c",Mark2);
		}
	} 
}
void Inverted_Right_Triangle()//倒右直角三角形
{
    int cnt1;
	int cnt2;
	int Max_White = 7;
	char Mark1 = ' ';
	char Mark2 = '*';
	for(cnt1 = 0 ; cnt1 <= Max_White ; cnt1++)
	{
	    printf("\n");
		for(cnt2 = 0 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark1);
		}
		for(cnt2 = 8 ; cnt2>cnt1 ; cnt2--)
		{
			printf("%c",Mark2);
		}
	}
}
void Left_Triangle()//左直角三角形
{
    int cnt1;
	int cnt2;
	int Max_White = 7;
	char Mark2 = '*';
	for(cnt1 = 0 ; cnt1 <= Max_White ; cnt1++)
	{
	    printf("\n");
		for(cnt2 = 0 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark2);
		}
	}  
}
void Inverted_Left()//倒左直角三角形
{
    int cnt1;
	int cnt2;
	char Mark2 = '*';
	for(cnt1 = 8 ; cnt1 > 0 ; cnt1--)
	{
		printf("\n");
		for(cnt2 = 1 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark2);
		}
	} 	
}

