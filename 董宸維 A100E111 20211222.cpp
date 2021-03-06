/******************************************************************************/
/*****************************************************************************/
/*                   董宸維  A100E111  2021/12/22                           */
/***************************************************************************/
#include <stdio.h>
#define MAX_LENGTH 100//定義長度 
#define NUM_STRINGS 9//定義行數 
#define NUM_STRINGS1 10
void Inverted_Left();
void Left_Triangle();
void Inverted_Right_Triangle();
void Right_Triangle();
void Equilateral();
void Inverted_Equilateral();
void Main_Import();
char arr[NUM_STRINGS][MAX_LENGTH]={
    {"請問您要哪一種形狀\n"},
    {"1.正三角形\n"},
    {"2.倒正三角形\n"},
    {"3.右直角三角形\n"},
    {"4.倒右直角三角形\n"},
    {"5.左直角三角形\n"},
    {"6.倒左直角三角形\n"},
    {"7.菱形\n"},
    {"0.離開\n"}
};
char arr1[NUM_STRINGS1][MAX_LENGTH]={
    {"輸入錯誤!\n"},
    {"已離開\n"}
};
int main(int argc, char *argv[])
{
 	char MainID =argv [1][0];
    while(1)
    {
    	if( MainID != 10)//10是 ENTER遇到他就會跳過,不等於的時候才會進來 
        {
            printf("Pease input number 1-6 argument flow the .exe \n");    
			for (int i = 0; i < NUM_STRINGS; ++i)//用for迴圈印陣列
            printf("%s", arr[i]);//%s字串 
         
        }
        scanf("%c",&MainID);
        
        switch(MainID)
        {
            case '1':
                Equilateral();
                break;
            case '2':
                Inverted_Equilateral();
                break;
            case 51://='3'
                Right_Triangle();
                break;
            case 52://='4'
                Inverted_Right_Triangle();
                break;
            case 53://='5'
                Left_Triangle();
                break;
            case 54://='6'
                Inverted_Left();
                break;
            case 55://='7'
                Equilateral();
                Inverted_Equilateral();
                break;
            case 10://ENTER
             break;
            case '0':
                break;
            default :
                printf("%s",arr1[0]);
        }
        if(MainID=='0')
        {
        	printf("%s",arr1[1]); 
            break;
    	}
    }
	return 0;
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
