/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*****************************************************************************/
/*                   董宸維 S110002822 2021/09/29                           */
/***************************************************************************/

#include <stdio.h>

int main()
{
    //乘法範例
    int Vlue1 = 7;
    int Vlue2 = 3;
    int Result1 = 1;
    //運算Vlue1*Vlue2
    Result1 = Vlue1*Vlue2;
    //列印Vlue1*Vlue2的運算結果
    printf("Vlue1*Vlue2=%d\n",Result1);
    
    //除法取整數範例
    int Vlue3 = 8;
    int Vlue4 = 4;
    int Result2 = 4;
    //運算Vlue3/Vlue4
    Result2 = Vlue3/Vlue4;
    //列印Vlue3/Vlue4的運算結果
    printf("整數相除(取整數)Vlue3/Vlue4=%d\n",Result2);
    
    /**********************************/
    
    //除法浮點數運算範例
    float Vlue3_1 = 9;
    float Vlue4_1 = 29;
    float Result2_1 = 10;
    //運算Vlue3_1/Vlue4_1
    Result2_1 = Vlue3_1/Vlue4_1;
    //列印Vlue3_1/Vlue4_1的運算結果
    printf("浮點數運算Vlue3_1/Vlue4_1=%f\n",Result2_1);
    
    /**********************************/
    
    //除法取於數範例
    
    Vlue3 = 10;//可以跟改以定義的數值
    Vlue4 = 7;//可以跟改以定義的數值
    
    Result2 = 9;
    //運算Vlue3/Vlue4
    Result2 = Vlue3%Vlue4;
    //列印Vlue3%Vlue4的運算結果
    printf("除法取於數Vlue3^Vlue4=%d\n",Result2); 
    
    /**********************************/

    //加法範例
    int Vlue5 = 10;
    int Vlue6 = 1;
    int Result3 = 5;
    //運算Vlue5+Vlue6
    Result3 = Vlue5+Vlue6;
    //列印Vlue5+Vlue6的運算結果
    printf("Vlue5+Vlue6=%d\n",Result3);
    
    //減法範例
    int Vlue7 = 22;
    int Vlue8 = 2;
    int Result4 = 0;
    //運算Vlue7-Vlue8
    Result4 = Vlue7-Vlue8;
    //列印Vlue7-Vlue8的運算結果
    printf("Vlue7-Vlue8=%d\n",Result4);


    //系統回傳
    return 0;
}
