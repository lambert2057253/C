/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*****************************************************************************/
/*                   董宸維 S110002822 2021/10/20                           */
/***************************************************************************/

#include <stdio.h>
#include <limits.h>
void AND_Operation();
void OR_Operation();
void XOR_Operation();
void BitShify_Operation();
void NOT_Operate();
void While_RAN();
int INT_inquiry(int cmd);
int InqueryInt();

void AND_Operation()//AND運算
{
    int A = 0;
    int B = 0;
    int C = 0;
    int C1 = 0;
    int C2 = 0;
    printf("請輸入兩個值來做AND運算\n\r");
    scanf("%d %d",&C1,&C2);
    printf("您輸入的值為%d與%d\n\r",C1,C2);
    C = C1 & C2; //AND = &
    printf("A AND B =%d\n",C);
    
}
void OR_Operation()//OR運算
{
    int A = 0;
    int B = 0;
    int C = 0;
    int C1 = 0;
    printf("請輸入兩個值來做OR運算\n\r");
    scanf("%d %d",&A,&B);
    printf("您輸入的值為%d與%d\n\r",A,B);
    C = A | B;//OR = |
    printf("A OR B =%d\n",C);
    
}
void XOR_Operation()//XOR運算
{
    int A = 2;
    int B = 168;
    int C = 0;
    int C1 = 0;
    int C2 = 0;

    C = A ^ B;//XOR = ^
    //0000 0010
    //1010 1000
    //----------
    //1010 1010 = 128+32+8+2=170 相同為0不同為1
    printf("A XOR B =%d\n",C);
    
    A = 255;
    C = A ^ B;//XOR = ^
    //1111 1111
    //1010 1000
    //----------
    //0101 0111 = 64+16+4+2+1=87 相同為0不同為1
    printf("A XOR B =%d\n",C);
    
}
void BitShify_Operation()//BitShify運算
{
    int A = 2;
    int B = 168;
    int C = 0;
    int C1 = 0;
    int C2 = 0;

    C = B>>1;//右移運算 移動1個位元即除2
    //B=1010 1000 -> 0101 0100 = 64+16+4=84
    
    printf("B右移運算 =%d\n",C);
    
    C = B<<1;//左移運算 移動1個位元即乘2
    //B=1010 1000 -> 0000 0001 0101 0000 = 256+64+16=336
    
    printf("B左移運算 =%d\n",C);
    
    C1 = A<<1;//左移運算 移動1個位元即乘2
    C2 = B<<1;//左移運算 移動1個位元即乘2
    //A=1111 1111 -> 0000 0001 1111 1110 = 256+128+64+32+16+8+4+2=510
    //B=1010 1000 -> 0000 0001 0101 0000 = 256+64+16=336
    
    printf("A左移運算 =%d\n",C1);
    
    C = C1 ^ C2;//XOR = ^ 
    //0000 0001 1111 1110
    //0000 0001 0101 0000
    //-------------------
    //0000 0000 1010 1110 = 128+32+8+4+2=174相同為0不同為1
    printf("C1 ^ C2 =%d\n",C);

}
void NOT_Operate()//NOT運算
{
    int A =2;  
    int C =0;
   
    //1100 0000 右移
    //-----------------
    //0110 0000
    C=!A;//右移運算 移動1個位元即除2
    printf("!A反向運算 = %d \r\n",C);
    
    C=-A;//右移運算 移動1個位元即除2
    printf("-A反向運算 = %d \r\n",C);
    
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
        }
    }
}
int INT_inquiry(int cmd)
{
    int ReturnEnd=-1;
    if(cmd==0)//查詢最小值
    {
        printf("INT 最小值 =%d\n\r",INT_MIN);
        ReturnEnd = INT_MIN;
    }
    if(cmd==1)//查詢最大值
    {
        printf("INT 最大值=%d\n\r",INT_MAX);
        ReturnEnd = INT_MAX;
    }
    return ReturnEnd;
}
int InqueryInt()
{
    int inputValue = 0;
    int inquiryResuit = 0;
    while(1)
    {
        printf("/*******************INT 查詢程式*******************/\r\n");
        printf("    輸入0顯示最小值\r\n");
        printf("    輸入1顯示最大值\r\n");
        printf("    輸入-1離開\r\n");
        scanf("%d",&inputValue);
        if(inputValue==1 || inputValue==0 || inputValue==-1)
        {
            if(inputValue==-1)
            {
                break;
            }
            inquiryResuit= INT_inquiry(inputValue);
            printf("收到的回傳值為%d\r\n",inquiryResuit);
        }
        else
        {
            printf("你輸入%d!!請照指示輸入數值範圍!!\r\n",inputValue);
        }
    }
    return inputValue;
}
int main()//主程式
{
    AND_Operation();//副程式
    OR_Operation();//副程式
    //XOR_Operation();//副程式
    //BitShify_Operation();//副程式
    //NOT_Operate();//副程式

    return 0;
}