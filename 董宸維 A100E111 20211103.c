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
void Number3();
void Triangle_Pattern();
void Square_Pattern();
void Star_Pattern();

void Number3()
{
    int Kye = 0;
    int Number = 0;
    while(Number<3)
    {
        printf("請輸入要顯示的圖形\n");
        printf("1.三角形\n");
        printf("2.正方形\n");
        printf("3.星形\n");
        scanf("%d",&Kye);
        if(Kye==1)
        {
            Triangle_Pattern();
        }else if(Kye==2)
        {
            Square_Pattern();
        }else if(Kye==3)
        {
            Star_Pattern();
        }else
        {
            printf("輸入錯誤\n");
        }
        Number=Number+1;
    }
}
void Triangle_Pattern()
{
    printf("          /\\          \n");
    printf("         /  \\          \n");
    printf("        /    \\          \n");
    printf("       /      \\          \n");
    printf("      /        \\          \n");
    printf("     /          \\          \n");
    printf("    /            \\          \n");
    printf("    --------------            \n");
}
void Square_Pattern()
{
    printf("     -------------   \n");
    printf("    |             |   \n");
    printf("    |             |    \n");
    printf("    |             |     \n");
    printf("    |             |      \n");
    printf("    |             |       \n");
    printf("     -------------         \n");
}
void Star_Pattern()
{
    printf("                *                \n");
    printf("               ***               \n");
    printf("              *****              \n");
    printf("             *******             \n");
    printf("            *********            \n");
    printf("   ***************************  \n");
    printf("     ***********************  \n");
    printf("      ********************  \n");
    printf("        ****************  \n");
    printf("       *******    *******  \n");
    printf("      ***              ***  \n");
    printf("     *                    *  \n");
}
int main()//主程式
{

    Number3();
 
    return 0;
}