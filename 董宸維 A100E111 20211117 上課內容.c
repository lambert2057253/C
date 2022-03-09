/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int controller = 10;
    int offset = 0;
    int Res=0;
    int cunter=1;
    while(cunter)
    {
        //srand(time(NULL));
        //Res=rand()%controller+offset;
        Res=(rand()%10)+0;
        printf("%d電腦亂數%d",cunter,Res);
        cunter++;
        getchar();
    }
    return 0;
}
