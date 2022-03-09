/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <limits.h> 

/*********************************************/
/* Function1   唐英傑 T094000082 2021/10/20  */
/*********************************************/
int DispltDataTypeMax_Min();
void AND_Operate();
void OR_Operate();
void XOR_Operate();
void BitShift_Operate();
int INT_inquiry(int cmd);
void BitShift_Operate();
void NOT_Operate();
void KeinProgram();


int main()//主程式
{
    //DispltDataTypeMax_Min();
    KeinProgram();
    //NOT_Operate();
    return 0;
}
///
int DispltDataTypeMax_Min()
{
    
   printf("The number of bits in a byte %d\r\n", CHAR_BIT);
   printf("The minimum value of SIGNED CHAR = %d\r\n", SCHAR_MIN);
   printf("The maximum value of SIGNED CHAR = %d\r\n", SCHAR_MAX);
   printf("The maximum value of UNSIGNED CHAR = %d\r\n", UCHAR_MAX);
   printf("The minimum value of SHORT INT = %d\r\n", SHRT_MIN);
   printf("The maximum value of SHORT INT = %d\r\n", SHRT_MAX); 
   printf("The minimum value of INT = %d\r\n", INT_MIN);
   printf("The maximum value of INT = %d\r\n", INT_MAX);
   printf("The minimum value of CHAR = %d\r\n", CHAR_MIN);
   printf("The maximum value of CHAR = %d\r\n", CHAR_MAX);

   printf("The minimum value of LONG = %ld\r\n", LONG_MIN);
   printf("The maximum value of LONG = %ld\r\n", LONG_MAX);
}
//INT 最大 最小值查詢程式
int InqueryInt()
{
 int inputValue=0;
    int inquiryResult = 0;
     while(1)
     {
         printf("**************INT 查詢程式***********\r\n");
         printf("   輸入0顯示最小值\r\n");
         printf("   輸入1顯示最大值\r\n");
         scanf("%d",&inputValue);
         if(inputValue==0 || inputValue==1)
         {
             inquiryResult= INT_inquiry(inputValue);
             printf("收到的回傳值為 %d \r\n",inquiryResult);    
         }else
         {
             printf("您輸入了%d !!請照指示輸入數值範圍!! \r\n",inputValue);
         } 
     }   
}
///AND ()運算
void AND_Operate()
{
    int A =2;  
    int B =192;
    int C =0;
    int SanV1=-1;
    int SanV2=-1;
    printf("請輸入兩組運算值\r\n");
    scanf("%d %d",&SanV1,&SanV2);
    printf("您輸入的是 = %d 與 %d \r\n",SanV1,SanV2);
    if(SanV1!=-1 && SanV2!=-1)
    {
        A = SanV1;
        B = SanV2;    
    }
    
    C= A & B; //AND &
    printf("A AND B = %d \r\n",C);
}
///OR (或)運算
void OR_Operate()
{
    int A =2;  
    int B =192;
    int C =0;
    
    C= A | B; //OR  |
    //0000 0010
    //1100 0000
    //--------------
    //1100 0010=194
    printf("A OR B = %d \r\n",C);
}
///XOR (互斥或)運算
void XOR_Operate()
{
    int A =2;  
    int B =192;
    int C =0;
    
    C= A ^ B; //XOR  ^
    //0000 0010
    //1100 0000
    //--------------
    //1100 0010=194
    printf("A XOR B = %d \r\n",C);
    A=255;
    C= A ^ B; //XOR  ^
    //0000 0000 0000 0000 0000 0000 1111 1111
    //0000 0000 0000 0000 0000 0000 1100 0000
    //------------------------------------------
    //0000 0000 0000 0000 0000 0000 0011 1111=32+16+15=63
    printf("A XOR B = %d \r\n",C);
}
///BitShify (位元位移)運算
void BitShift_Operate()
{
    int A =2;  
    int B =192;
    int C =0;
   
    //1100 0000 右移
    //-----------------
    //0110 0000
    C=B>>1;//右移運算 移動1個位元即除2
    printf("B右移個運算 = %d \r\n",C);
    //0000 0000 1100 0000 左移84
    C=B<<1;//左移運算 移動1個位元即乘2
    printf("B左移個運算 = %d \r\n",C);
    
    //-----------------
    //0000 0001 1000 0000 256+128=3
     printf("INT 最大值 = %d \r\n",INT_MAX);
}

void NOT_Operate()
{
    int A =2;  
    int C =0;
   
    //    0000 0000 0000 0000 0000 0000 0000 0010 右移
    //NOT
    //-----------------
    //    1111 1111 1111 1111 1111 1111 1111 1101
    C=!A;//
    printf("!A反向運算 = %d \r\n",C);
    C=~A;//
    printf("~A反向運算 = %d \r\n",C);
    
}
void KeinProgram()
{
  int inputValue=0;
    while(1)
     {
         printf("/*******************************/\r\n");
         printf("   請輸入數值，呼叫對應的運算\r\n");
         printf("   AND運算輸入1 \r\n");
         printf("   OR運算輸入2 \r\n");
         printf("   XOR運算輸入3 \r\n");
         printf("   BitShift運算輸入4 \r\n");
         printf("   輸入0 結束程式 \r\n");
         printf("/******************************/\r\n");
         //掃描使用者輸入數值
         scanf("%d",&inputValue);
         if(inputValue==1)
         {
            AND_Operate();//副程式 
         }
         if(inputValue==2)
         {
            OR_Operate(); 
         }
         if(inputValue==3)
         {
            XOR_Operate(); 
         }
         if(inputValue==4)
         {
            BitShift_Operate(); 
         }
          if(inputValue==0)
         {
           break;
         }  
     }
}

int INT_inquiry(int cmd)
{
   int Reslut=-1;
    if(cmd==0)//查詢最小值
    {
        printf("INT 最小值 = %d \r\n",INT_MIN);
        
        Reslut= INT_MIN;
    }
    if(cmd==1)//查詢最大值
    {
        printf("INT 最大值 = %d \r\n",INT_MAX);
        Reslut= INT_MAX;
    }
    return Reslut;
}
