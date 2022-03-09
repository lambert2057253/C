/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*****************************************************************************/
/*                   董宸維 S110002822 2021/10/13                           */
/***************************************************************************/

#include <stdio.h>
#include <limits.h>

void AND_Operation()//AND運算
{
    int A = 2;
    int B = 168;
    int C = 0;
    int C1 = 0;
    int C2 = 0;
    C = A & B; //AND = &
    //0000 0010
    //1010 1000
    //----------
    //0000 0000 = 0 乘法
    printf("A AND B =%d\n",C);
    
}
void OR_Operation()//OR運算
{
    int A = 2;
    int B = 168;
    int C = 0;
    int C1 = 0;
    C = A | B;//OR = |
    //0000 0010
    //1010 1000
    //----------
    //1010 1010 = 128+32+8+2=170 加法
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
int main()//主程式
{
    //AND_Operation();//副程式
    //OR_Operation();//副程式
    //XOR_Operation();//副程式
    //BitShify_Operation();//副程式
    //NOT_Operate();//副程式
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
    
    return 0;
}