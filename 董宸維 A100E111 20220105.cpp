

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define NUM 5 //定意陣列大小 
struct student//名稱為student的結構
{
    char name[8];//最多領取8個字元 
    float month;//浮點數 
    int date;//整數 
    float BMI; 
};
   
int main()
{
    struct student who[NUM];//宣告陣列結構 
    char Key;
	int i;
	int cnt_recorder;
    int total;
    float Average;
    //輸入要計算的資料
	printf("請輸入個人資料....\n\n");
    for (i=0; i<NUM; i++) {//[NUM]因為上面先告陣列大小是2所以他會跑兩次 
       printf("第%d位 :\n",i+1);
       
       printf("    請輸入姓名 ");
       scanf("%s", who[i].name);//%s 字串 %s本身是指向所以不用加& who[i].name從上面的結構裡拿下來 
       
       printf("    請輸入月份 ");
       scanf("%f", &who[i].month);//%f 有浮點數 
       
       printf("    請輸入日期 ");
       scanf("%d", &who[i].date);//%d 整數 
       
       printf("    如果還需要輸入請案任意鍵不需要請按0\n");
       Key=getch();//取得任意鍵不能只有寫 getch() Enter會接收不到所以要開記憶體空間給他 
       cnt_recorder=i;
       if(Key=='0')//getch()收到的值是字元 
	   {
	   	break;
	   }
    }
    //顯示輸入結果 
    printf("\n你輸入的結果 ...\n\n");
    printf("            名字     日期     星座    相斥配對 ");
    printf("\n\n");
    
    for (i = 0; i<=cnt_recorder; i++) {
       printf("    #%d",i+1);
       printf("    %8s   ",who[i].name);
       //printf("    %5f %8d",who[i].Height,who[i].weight);
       //who[i].BMI=who[i].weight/(who[i].Height*who[i].Height) ;
       //printf("    %5f   ",who[i].BMI);
       //printf("\n");
    }
   /* //計算BMI總值 
    for (i=0,total=0; i<NUM; i++)
 {
        total += who[i].BMI;     
 }    
 	//計算BMI平均值 
   Average=  total/2;
    printf("\n   Average BMI : %f \n",Average);
    
    system("PAUSE");*/
    return 0;
}
