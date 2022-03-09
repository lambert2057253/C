/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void Paint_RightTriangle();         //用迴圈印出直角三角型(右)
void Paint_InvertedRightriangle();  //用迴圈印出倒直角三角型(右)
void Paint_LeftTriangle();          //用迴圈印出直角三角型(左)
void Paint_InvertedLeftTriangle();  //用迴圈印出倒直角三角型(左)
void Paint_InvertedTriangle();      //用迴圈印出倒三角型
void Paint_EquilateralTriangle();   //用迴圈印出正三角型
int main()
{
    printf("2021/12/01 Demo");
    
    Paint_RightTriangle();       //1
    Paint_InvertedRightriangle();//2
    Paint_InvertedLeftTriangle();//3
    Paint_LeftTriangle();        //4
    
    Paint_EquilateralTriangle(); //5
    Paint_InvertedTriangle();    //6
    return 0;
}
//用迴圈印出正三角型
void Paint_EquilateralTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark1=' ';
        char Mark2='*';
        printf("Go!Paint Inverted Left Triangle \r\n");//印出標題
        for(cnt1=MaxWidth;cnt1>0;cnt1--) 
        {
            for(cnt2=0;cnt2<cnt1;cnt2++) //畫出空白部分
            {
                printf("%c",Mark1);
            }   
             for(cnt2=(MaxWidth-cnt1)*2-1;cnt2>0;cnt2--) //劃出實體部分
            {
                printf("%c",Mark2);
            }  
            printf("\r\n");
        }
}
//用迴圈印出倒三角型
void Paint_InvertedTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark1=' ';
        char Mark2='*';
        printf("Go!Paint Left Triangle \r\n");//印出標題
        for(cnt1=0;cnt1<MaxWidth;cnt1++) 
        {
            for(cnt2=0;cnt2<=cnt1;cnt2++) //畫出空白部分
            {
                printf("%c",Mark1);
            }
            for(cnt2=(MaxWidth-cnt1)*2-1;cnt2>0;cnt2--) //劃出實體部分
            {
                printf("%c",Mark2);
            }   
            printf("\r\n");
        }
}
//用迴圈印出倒直角三角型(左)
void Paint_LeftTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark1=' ';
        char Mark2='*';
        printf("Go!Paint Left Triangle \r\n");//印出標題
        for(cnt1=0;cnt1<MaxWidth;cnt1++) 
        {
            for(cnt2=0;cnt2<=cnt1;cnt2++) //畫出空白部分
            {
                printf("%c",Mark1);
            }
            for(cnt2=MaxWidth-cnt1;cnt2>0;cnt2--) //劃出實體部分
            {
                printf("%c",Mark2);
            }   
            printf("\r\n");
        }
}
//用迴圈印出倒直角三角型(左)
void Paint_InvertedLeftTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark1=' ';
        char Mark2='*';
        printf("Go!Paint Inverted Left Triangle \r\n");//印出標題
        for(cnt1=MaxWidth;cnt1>0;cnt1--) 
        {
            for(cnt2=0;cnt2<cnt1;cnt2++) //畫出空白部分
            {
                printf("%c",Mark1);
            }   
             for(cnt2=MaxWidth-cnt1;cnt2>0;cnt2--) //劃出實體部分
            {
                printf("%c",Mark2);
            }  
            printf("\r\n");
        }
}
//用迴圈印出直角三角型(右)
void Paint_RightTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark='*';
        printf("Go!Paint Right Triangle \r\n");//印出標題
        for(cnt1=0;cnt1<MaxWidth;cnt1++) 
        {
            for(cnt2=0;cnt2<=cnt1;cnt2++) 
            {
                printf("%c",Mark);
            }   
            printf("\r\n");
        }
}
//用迴圈印出倒直角三角型(右)
void Paint_InvertedRightriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark='*';
        printf("Go!Paint Inverted Right Triangle \r\n");//印出標題
        for(cnt1=MaxWidth;cnt1>0;cnt1--) 
        {
            for(cnt2=0;cnt2<cnt1;cnt2++) 
            {
                printf("%c",Mark);
            }   
            printf("\r\n");
        }
}
