/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*****************************************************************************/
/*                     董宸維 A100E111 2021/10/27                           */
/***************************************************************************/

#include <stdio.h>
#include <limits.h>
void AND_Operation();
void OR_Operation();
void XOR_Operation();
void BitShify_Operation();
void NOT_Operate();
void While_RAN();
void AND_Operation()//AND運算
{
    int A = 0;
    int B = 0;
    int C = 0;
    int C1 = 0;
    int C2 = 0;
    while(1)
    {
        printf("請輸入兩個值來做AND運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&C1);
        if(C1==0)
        {
            break;
        }
        scanf("%d",&C2);
        printf("您輸入的值為%d與%d\n\r",C1,C2);
        C = C1 & C2; //AND = &
        printf("%d AND %d =%d\n",C1,C2,C);
    }
    printf("已離開AND運算\n\r");
}
void OR_Operation()//OR運算
{
    int A = 0;
    int B = 0;
    int C = 0;
    int C1 = 0;
    while(1)
    {
        printf("請輸入兩個值來做OR運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&A);
        if(A==0)
        {
            break;
        }
        scanf("%d",&B);
        printf("您輸入的值為%d與%d\n\r",A,B);
        C = A | B;//OR = |
        printf("%d OR %d =%d\n",A,B,C);
    }

}
void XOR_Operation()//XOR運算
{
    int A = 2;
    int B = 168;
    int C = 0;
    int C1 = 0;
    int C2 = 0;
    while(1)
    {
        printf("請輸入兩個值來做XOR運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&A);
        if(A==0)
        {
            break;
        }
        scanf("%d",&B);
        printf("您輸入的值為%d與%d\n\r",A,B);
        C = A ^ B;//XOR = ^
        printf("%d XOR %d =%d\n",A,B,C);
    }
    
}
void BitShify_Operation()//BitShify運算
{
    int A = 2;
    int B = 168;
    int C = 0;
    int C1 = 0;
    int C2 = 0;
    while(1)
    {
        printf("請輸入兩個值來做BitShify運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&A);
        if(A==0)
        {
            break;
        }
        scanf("%d",&B);
        A = C1>>1;//右移運算 移動1個位元即除2
        B = C2>>1;
        printf("您輸入的值右移後的值為%d與%d\n\r",A,B);
        C = A & B; //AND = &
        printf("%d AND %d =%d\n",A,B,C);
        C = A ^ B;//XOR = ^
        printf("%d XOR %d =%d\n",A,B,C);
        C = A | B;//OR = |
        printf("%d OR %d =%d\n",A,B,C);
    }

}
void NOT_Operate()//NOT運算
{
    int A =2;
    int B =0;
    int C =0;
    while(1)
    {
        printf("請輸入兩個值來做NOT運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&A);
        if(A==0)
        {
            break;
        }
        scanf("%d",&B);
        C=!A;//右移運算 移動1個位元即除2
        printf("!A反向運算 = %d \r\n",C);
        
        C=-A;//右移運算 移動1個位元即除2
        printf("-A反向運算 = %d \r\n",C);
        
        C=!B;//右移運算 移動1個位元即除2
        printf("!B反向運算 = %d \r\n",C);
        
        C=-B;//右移運算 移動1個位元即除2
        printf("-B反向運算 = %d \r\n",C);
    }
    
}
void While_RAN()
{
    int inputValue=0;
    
    while(1)
    {
    
        printf("/******************************/\n\r");    
        printf("  請輸入數值,呼叫對應的運算\n\r");
        printf("    AND運算輸入1\n\r");
        printf("    OR運算輸入2\n\r");
        printf("    XOR運算輸入3\n\r");
        printf("    BitShify運算輸入4\n\r");
        printf("    NOT運算輸入5\n\r");
        printf("    離開請按0\n\r");
        printf("/******************************/\n\r");
        scanf("%d",&inputValue);//scanf掃描使用者輸入的數值
        if(inputValue==1)//兩個==是比較,一個=是改數值
        {
            AND_Operation();
        }
        if(inputValue==2)
        {
            OR_Operation();
        }
        if(inputValue==3)
        {
            XOR_Operation();
        }
        if(inputValue==4)
        {
            BitShify_Operation();
        }
        if(inputValue==5)
        {
            NOT_Operate();
        }
        if(inputValue==0)
        {
            break;
        }else
        {
            printf("輸入錯誤!!請重新輸入!!\r\n");
        }
    }
}
int main()//主程式
{
    //AND_Operation();//副程式
    //OR_Operation();//副程式
    //XOR_Operation();//副程式
    //BitShify_Operation();//副程式
    //NOT_Operate();//副程式
    While_RAN();
 
    return 0;
}