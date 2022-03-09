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

void AND_Operation()
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
void OR_Operation()
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
void XOR_Operation()
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
void BitShify_Operation()
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
void NOT_Operate()
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
    AND_Operation();//副程式
    OR_Operation();//副程式
    XOR_Operation();//副程式
    BitShify_Operation();//副程式
    NOT_Operate();//副程式
    return 0;
}