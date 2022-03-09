/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*****************************************************************************/
/*                   董宸維  A100E111  2021/11/24                           */
/***************************************************************************/
#include <stdio.h>

int main()
{
    int YearMain=2021;
    int UaryMain=12;
    int DayMain=30;
    //for 迴圈遞增型用法
    for(int Year = 2015; Year<=YearMain ; Year=Year+1)
    {
        printf("\n--------------------------");
        printf("\n%d年",Year);
        
        for(int Uary=1;Uary<=UaryMain;Uary=Uary+1)
        {
            
            if(Uary==2)//如果等於2月日期等於28天
            {
                DayMain = 28;
            }else
            {
                if(Uary==1 || Uary==3 || Uary==5 || Uary==7 || Uary==8 || Uary==10 || Uary==12)
                DayMain = 31;
                if(Uary==4 || Uary==6 || Uary==9 || Uary==11)
                DayMain = 30;
            }
            if(Uary<=UaryMain)
            {
                printf("\n");//getchar();停止等待輸入
                printf("--------------------------\n");
            }
            printf("  %d月\n",Uary);
            printf("--------------------------");
            //getchar();
           for(int Day=1;Day<=DayMain;Day=Day+1)
           {
               if(Day/7*7+1==Day)//先除7的商在乘7在+1 = 7的倍數+1
               {
                   printf("\n");
               }
               printf("%d ",Day);
               
           }
        }
    }
    return 0;
}