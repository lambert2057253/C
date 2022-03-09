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
void AND_Operation();
void OR_Operation();
void XOR_Operation();
void BitShify_Operation();
void NOT_Operate();
void While_RAN();
int INT_inquiry(int cmd);
int InqueryInt();
void Number3();
void Triangle_Pattern();
void Square_Pattern();
void Star_Pattern();
void AND_Operation()//AND運算
{
    int A = 0;
    int B = 0;
    int C = 0;
    int C1 = 0;
    int C2 = 0;
    while(1)
    {
        printf("請輸入兩個值來做AND運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&C1);
        if(C1==0)
        {
            break;
        }
        scanf("%d",&C2);
        printf("您輸入的值為%d與%d\n\r",C1,C2);
        C = C1 & C2; //AND = &
        printf("%d AND %d =%d\n",C1,C2,C);
    }
    printf("已離開AND運算\n\r");
}
void OR_Operation()//OR運算
{
    int A = 0;
    int B = 0;
    int C = 0;
    int C1 = 0;
    while(1)
    {
        printf("請輸入兩個值來做OR運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&A);
        if(A==0)
        {
            break;
        }
        scanf("%d",&B);
        printf("您輸入的值為%d與%d\n\r",A,B);
        C = A | B;//OR = |
        printf("%d OR %d =%d\n",A,B,C);
    }

}
void XOR_Operation()//XOR運算
{
    int A = 2;
    int B = 168;
    int C = 0;
    int C1 = 0;
    int C2 = 0;
    while(1)
    {
        printf("請輸入兩個值來做XOR運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&A);
        if(A==0)
        {
            break;
        }
        scanf("%d",&B);
        printf("您輸入的值為%d與%d\n\r",A,B);
        C = A ^ B;//XOR = ^
        printf("%d XOR %d =%d\n",A,B,C);
    }
    
}
void BitShify_Operation()//BitShify運算
{
    int A = 2;
    int B = 168;
    int C = 0;
    int C1 = 0;
    int C2 = 0;
    while(1)
    {
        printf("請輸入兩個值來做BitShify運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&A);
        if(A==0)
        {
            break;
        }
        scanf("%d",&B);
        A = C1>>1;//右移運算 移動1個位元即除2
        B = C2>>1;
        printf("您輸入的值右移後的值為%d與%d\n\r",A,B);
        C = A & B; //AND = &
        printf("%d AND %d =%d\n",A,B,C);
        C = A ^ B;//XOR = ^
        printf("%d XOR %d =%d\n",A,B,C);
        C = A | B;//OR = |
        printf("%d OR %d =%d\n",A,B,C);
    }

}
void NOT_Operate()//NOT運算
{
    int A =2;
    int B =0;
    int C =0;
    while(1)
    {
        printf("請輸入兩個值來做NOT運算\n\r");
        printf("離開請按0\n\r");
        scanf("%d",&A);
        if(A==0)
        {
            break;
        }
        scanf("%d",&B);
        C=!A;//右移運算 移動1個位元即除2
        printf("!A反向運算 = %d \r\n",C);
        
        C=-A;//右移運算 移動1個位元即除2
        printf("-A反向運算 = %d \r\n",C);
        
        C=!B;//右移運算 移動1個位元即除2
        printf("!B反向運算 = %d \r\n",C);
        
        C=-B;//右移運算 移動1個位元即除2
        printf("-B反向運算 = %d \r\n",C);
    }
    
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
        }else
        {
            printf("輸入錯誤!!請重新輸入!!\r\n");
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
void Number3()
{
    int Kye = 0;
    int Number = 0;
    while(Number<3)
    {
        printf("請輸入要顯示的圖形n\n");
        printf("1.三角形");
        printf("2.正方形\n");
        printf("3.星\形");
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
            printf("輸入錯誤");
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
    //AND_Operation();//副程式
    //OR_Operation();//副程式
    //XOR_Operation();//副程式
    //BitShify_Operation();//副程式
    //NOT_Operate();//副程式
    //While_RAN();
    Number3();
 
    return 0;
}