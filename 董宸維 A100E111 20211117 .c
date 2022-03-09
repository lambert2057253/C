/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*****************************************************************************/
/*                   董宸維  A100E111  2021/11/17                           */
/***************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Price_15_Dollar()
{
    printf("1礦泉水15元\n2麥香奶茶15元\n3麥香紅茶15元\n4麥香綠茶15元\n");
}
void Price_20_Dollar()
{
    printf("5可樂20元\n6牛奶花生20元\n7奧利多20元\n");
}
void Price_30_Dollar()
{
    printf("8茶裏王30元\n9老虎牙子30元\n10青草茶30元\n");
}
void Price_50_Dollar()
{
    printf("11滿漢大餐50元\n");
}
int Vending_Machine()
{
    int Cash=0;
    int Invest_in=0;
    scanf("%d",&Cash);
    printf("你輸入了%d\n",Cash);
    Invest_in = Cash;
    printf("您可以買的內容如下\n");
    if(Invest_in>50)//限制在50元
    {
        Invest_in=50;
    }
    if(Invest_in>=30 && Invest_in<50)//限制30元
    {
        Invest_in=30;
    }
    if(Invest_in>=20 && Invest_in<30)//限制20元
    {
        Invest_in=20;
    }
    if(Invest_in>=19 && Invest_in<20)//限制20元
    {
        Invest_in=15;
    }
    switch(Invest_in)
    {
        case 50:
            Price_15_Dollar();
            Price_20_Dollar();
            Price_30_Dollar();
            Price_50_Dollar();
            break;
        case 30:
            Price_15_Dollar();
            Price_20_Dollar();
            Price_30_Dollar();
            break;
        case 20:
            Price_15_Dollar();
            Price_20_Dollar();
            break;
        case 15:
            Price_15_Dollar();
            break;
        default:
            printf("無法辨識的輸入\n");
            printf("您有可能還投不夠呦!\n");
    }
    return Cash;
}
int main()
{
    int Result=Vending_Machine();
    int IDin=0;
    int Money=0;
    scanf("%d",&IDin);
    if(IDin==1)
    {
        printf("您購買礦泉水\n");
        Money=Result-15;
        printf("找您%d",Money);
    }
    if(IDin==2)
    {
        printf("您購買麥香奶茶\n");
        Money=Result-15;
        printf("找您%d",Money);
    }
    if(IDin==3)
    {
        printf("您購買麥香紅茶\n");
        Money=Result-15;
        printf("找您%d",Money);
    }
    if(IDin==4)
    {
        printf("您購買麥香綠茶\n");
        Money=Result-15;
        printf("找您%d",Money);
    }
    if(IDin==5)
    {
        printf("您購買可樂\n");
        Money=Result-20;
        printf("找您%d",Money);
    }
    if(IDin==6)
    {
        printf("您購買牛奶花生\n");
        Money=Result-20;
        printf("找您%d",Money);
    }
    if(IDin==7)
    {
        printf("您購買奧利多\n");
        Money=Result-20;
        printf("找您%d",Money);
    }
    if(IDin==8)
    {
        printf("您購買茶裏王\n");
        Money=Result-30;
        printf("找您%d",Money);
    }
    if(IDin==9)
    {
        printf("您購買老虎牙子\n");
        Money=Result-30;
        printf("找您%d",Money);
    }
    if(IDin==10)
    {
        printf("您購買麥青草茶\n");
        Money=Result-30;
        printf("找您%d",Money);
    }
    if(IDin==11)
    {
        printf("您購買滿漢大餐\n");
        Money=Result-50;
        printf("找您%d",Money);
    }
    return 0;
}
