/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*****************************************************************************/
/*                   董宸維 S110002822 2021/11/10                           */
/***************************************************************************/

#include <stdio.h>
void CharPractise();

void CharPractise()
{
    char Name;
    int Frequency=1;
    while(Frequency<=3)
    {
        printf("請輸入一個字\a\n");//聲音測試\a
        scanf("%c",&Name);//%c顯示文字
        printf("%d.已讀取到%c\n",Frequency,Name);// %d 64位元
        Frequency=Frequency+1;
    }
}
int main()
{
    char Kye;
    int frequency=1;
    while(frequency<=3)
    {
        printf("請輸入一個字\a\n");//聲音測試\a
        scanf("%c",&Kye);//%c顯示文字
        printf("%d.已讀取到%c\n",frequency,Kye);// %d 64位元
        frequency=frequency+1;
    }
    return 0;
}
